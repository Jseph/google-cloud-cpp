// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/client_options.h"
#include "google/cloud/storage/oauth2/google_credentials.h"
#include "google/cloud/internal/curl_options.h"
#include "google/cloud/internal/filesystem.h"
#include "google/cloud/internal/random.h"
#include "google/cloud/internal/rest_options.h"
#include "google/cloud/internal/rest_response.h"
#include "google/cloud/testing_util/scoped_environment.h"
#include "google/cloud/testing_util/setenv.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <cstdlib>
#include <fstream>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::testing_util::IsOk;
using ::google::cloud::testing_util::ScopedEnvironment;
using ::testing::IsEmpty;
using ::testing::Not;
using ::testing::UnorderedElementsAre;

namespace {
class ClientOptionsTest : public ::testing::Test {
 public:
  ClientOptionsTest()
      : enable_tracing_("CLOUD_STORAGE_ENABLE_TRACING", {}),
        endpoint_("CLOUD_STORAGE_EMULATOR_ENDPOINT", {}),
        old_endpoint_("CLOUD_STORAGE_TESTBENCH_ENDPOINT", {}),
        generator_(std::random_device{}()) {}

  std::string CreateRandomFileName() {
    // When running on the internal Google CI systems we cannot write to the
    // local directory. GTest has a good temporary directory in that case.
    return google::cloud::internal::PathAppend(
        ::testing::TempDir(),
        google::cloud::internal::Sample(
            generator_, 8, "abcdefghijklmnopqrstuvwxyz0123456789") +
            ".json");
  }

 protected:
  ScopedEnvironment enable_tracing_;
  ScopedEnvironment endpoint_;
  ScopedEnvironment old_endpoint_;
  google::cloud::internal::DefaultPRNG generator_;
};

// This is a syntactically valid JSON key file, but the key has been invalidated
// and therefore present no security risks.
constexpr char kJsonKeyfileContents[] = R"""({
      "type": "service_account",
      "project_id": "foo-project",
      "private_key_id": "a1a111aa1111a11a11a11aa111a111a1a1111111",
      "private_key": "-----BEGIN PRIVATE KEY-----\nMIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQCltiF2oP3KJJ+S\ntTc1McylY+TuAi3AdohX7mmqIjd8a3eBYDHs7FlnUrFC4CRijCr0rUqYfg2pmk4a\n6TaKbQRAhWDJ7XD931g7EBvCtd8+JQBNWVKnP9ByJUaO0hWVniM50KTsWtyX3up/\nfS0W2R8Cyx4yvasE8QHH8gnNGtr94iiORDC7De2BwHi/iU8FxMVJAIyDLNfyk0hN\neheYKfIDBgJV2v6VaCOGWaZyEuD0FJ6wFeLybFBwibrLIBE5Y/StCrZoVZ5LocFP\nT4o8kT7bU6yonudSCyNMedYmqHj/iF8B2UN1WrYx8zvoDqZk0nxIglmEYKn/6U7U\ngyETGcW9AgMBAAECggEAC231vmkpwA7JG9UYbviVmSW79UecsLzsOAZnbtbn1VLT\nPg7sup7tprD/LXHoyIxK7S/jqINvPU65iuUhgCg3Rhz8+UiBhd0pCH/arlIdiPuD\n2xHpX8RIxAq6pGCsoPJ0kwkHSw8UTnxPV8ZCPSRyHV71oQHQgSl/WjNhRi6PQroB\nSqc/pS1m09cTwyKQIopBBVayRzmI2BtBxyhQp9I8t5b7PYkEZDQlbdq0j5Xipoov\n9EW0+Zvkh1FGNig8IJ9Wp+SZi3rd7KLpkyKPY7BK/g0nXBkDxn019cET0SdJOHQG\nDiHiv4yTRsDCHZhtEbAMKZEpku4WxtQ+JjR31l8ueQKBgQDkO2oC8gi6vQDcx/CX\nZ23x2ZUyar6i0BQ8eJFAEN+IiUapEeCVazuxJSt4RjYfwSa/p117jdZGEWD0GxMC\n+iAXlc5LlrrWs4MWUc0AHTgXna28/vii3ltcsI0AjWMqaybhBTTNbMFa2/fV2OX2\nUimuFyBWbzVc3Zb9KAG4Y7OmJQKBgQC5324IjXPq5oH8UWZTdJPuO2cgRsvKmR/r\n9zl4loRjkS7FiOMfzAgUiXfH9XCnvwXMqJpuMw2PEUjUT+OyWjJONEK4qGFJkbN5\n3ykc7p5V7iPPc7Zxj4mFvJ1xjkcj+i5LY8Me+gL5mGIrJ2j8hbuv7f+PWIauyjnp\nNx/0GVFRuQKBgGNT4D1L7LSokPmFIpYh811wHliE0Fa3TDdNGZnSPhaD9/aYyy78\nLkxYKuT7WY7UVvLN+gdNoVV5NsLGDa4cAV+CWPfYr5PFKGXMT/Wewcy1WOmJ5des\nAgMC6zq0TdYmMBN6WpKUpEnQtbmh3eMnuvADLJWxbH3wCkg+4xDGg2bpAoGAYRNk\nMGtQQzqoYNNSkfus1xuHPMA8508Z8O9pwKU795R3zQs1NAInpjI1sOVrNPD7Ymwc\nW7mmNzZbxycCUL/yzg1VW4P1a6sBBYGbw1SMtWxun4ZbnuvMc2CTCh+43/1l+FHe\nMmt46kq/2rH2jwx5feTbOE6P6PINVNRJh/9BDWECgYEAsCWcH9D3cI/QDeLG1ao7\nrE2NcknP8N783edM07Z/zxWsIsXhBPY3gjHVz2LDl+QHgPWhGML62M0ja/6SsJW3\nYvLLIc82V7eqcVJTZtaFkuht68qu/Jn1ezbzJMJ4YXDYo1+KFi+2CAGR06QILb+I\nlUtj+/nH3HDQjM4ltYfTPUg=\n-----END PRIVATE KEY-----\n",
      "client_email": "foo-email@foo-project.iam.gserviceaccount.com",
      "client_id": "100000000000000000001",
      "auth_uri": "https://accounts.google.com/o/oauth2/auth",
      "token_uri": "https://oauth2.googleapis.com/token",
      "auth_provider_x509_cert_url": "https://www.googleapis.com/oauth2/v1/certs",
      "client_x509_cert_url": "https://www.googleapis.com/robot/v1/metadata/x509/foo-email%40foo-project.iam.gserviceaccount.com"
})""";

TEST_F(ClientOptionsTest, Default) {
  // Create the options with the anonymous credentials because the default
  // credentials try to load the application default credentials, and those do
  // not exist in the CI environment, which results in errors or warnings.
  auto creds = oauth2::CreateAnonymousCredentials();
  ClientOptions options(creds);
  EXPECT_FALSE(options.enable_http_tracing());
  EXPECT_FALSE(options.enable_raw_client_tracing());
  EXPECT_TRUE(creds.get() == options.credentials().get());
  EXPECT_EQ("https://storage.googleapis.com", options.endpoint());
  EXPECT_EQ("v1", options.version());
  EXPECT_EQ("https://iamcredentials.googleapis.com/v1", options.iam_endpoint());
}

TEST_F(ClientOptionsTest, CreateDefaultError) {
  testing_util::ScopedEnvironment creds("GOOGLE_APPLICATION_CREDENTIALS",
                                        "not-a-file-should-fail");
  auto connection = ClientOptions::CreateDefaultClientOptions();
  EXPECT_THAT(connection, Not(IsOk()));
}

TEST_F(ClientOptionsTest, CreateDefaultWithChannelOptionsError) {
  testing_util::ScopedEnvironment creds("GOOGLE_APPLICATION_CREDENTIALS",
                                        "not-a-file-should-fail");
  auto connection = ClientOptions::CreateDefaultClientOptions({});
  EXPECT_THAT(connection, Not(IsOk()));
}

TEST_F(ClientOptionsTest, CreateDefault) {
  auto file = CreateRandomFileName();
  std::ofstream(file) << kJsonKeyfileContents;
  testing_util::ScopedEnvironment creds("GOOGLE_APPLICATION_CREDENTIALS", file);
  auto connection = ClientOptions::CreateDefaultClientOptions();
  EXPECT_STATUS_OK(connection);
  std::remove(file.c_str());
}

TEST_F(ClientOptionsTest, CreateDefaultWithChannelOptions) {
  auto file = CreateRandomFileName();
  std::ofstream(file) << kJsonKeyfileContents;
  testing_util::ScopedEnvironment creds("GOOGLE_APPLICATION_CREDENTIALS", file);
  auto connection = ClientOptions::CreateDefaultClientOptions({});
  EXPECT_STATUS_OK(connection);
}

TEST_F(ClientOptionsTest, EnableRpc) {
  testing_util::ScopedEnvironment enable_tracing("CLOUD_STORAGE_ENABLE_TRACING",
                                                 "foo,raw-client,bar");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_TRUE(options.enable_raw_client_tracing());
}

TEST_F(ClientOptionsTest, EnableHttp) {
  testing_util::ScopedEnvironment enable_tracing("CLOUD_STORAGE_ENABLE_TRACING",
                                                 "foo,http,bar");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_TRUE(options.enable_http_tracing());
}

TEST_F(ClientOptionsTest, EndpointsDefault) {
  testing_util::ScopedEnvironment endpoint("CLOUD_STORAGE_EMULATOR_ENDPOINT",
                                           {});
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("https://storage.googleapis.com", options.endpoint());
  auto o = internal::MakeOptions(std::move(options));
  EXPECT_EQ("https://storage.googleapis.com/storage/v1",
            internal::JsonEndpoint(o));
  EXPECT_EQ("https://storage.googleapis.com/upload/storage/v1",
            internal::JsonUploadEndpoint(o));
  EXPECT_EQ("https://iamcredentials.googleapis.com/v1",
            internal::IamEndpoint(o));
}

TEST_F(ClientOptionsTest, EndpointsOverride) {
  testing_util::ScopedEnvironment endpoint("CLOUD_STORAGE_EMULATOR_ENDPOINT",
                                           {});
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  options.set_endpoint("http://127.0.0.1.nip.io:1234");
  EXPECT_EQ("http://127.0.0.1.nip.io:1234", options.endpoint());
  auto o = internal::MakeOptions(std::move(options));
  EXPECT_EQ("http://127.0.0.1.nip.io:1234/storage/v1",
            internal::JsonEndpoint(o));
  EXPECT_EQ("http://127.0.0.1.nip.io:1234/upload/storage/v1",
            internal::JsonUploadEndpoint(o));
  EXPECT_EQ("http://127.0.0.1.nip.io:1234", internal::XmlEndpoint(o));
  EXPECT_EQ("https://iamcredentials.googleapis.com/v1",
            internal::IamEndpoint(o));
}

TEST_F(ClientOptionsTest, EndpointsEmulator) {
  testing_util::ScopedEnvironment endpoint("CLOUD_STORAGE_EMULATOR_ENDPOINT",
                                           "http://localhost:1234");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("http://localhost:1234", options.endpoint());
  auto o = internal::MakeOptions(std::move(options));
  EXPECT_EQ("http://localhost:1234/storage/v1", internal::JsonEndpoint(o));
  EXPECT_EQ("http://localhost:1234/upload/storage/v1",
            internal::JsonUploadEndpoint(o));
  EXPECT_EQ("http://localhost:1234", internal::XmlEndpoint(o));
  EXPECT_EQ("http://localhost:1234/iamapi", internal::IamEndpoint(o));
}

TEST_F(ClientOptionsTest, OldEndpointsEmulator) {
  google::cloud::testing_util::UnsetEnv("CLOUD_STORAGE_EMULATOR_ENDPOINT");
  testing_util::ScopedEnvironment endpoint("CLOUD_STORAGE_TESTBENCH_ENDPOINT",
                                           "http://localhost:1234");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("http://localhost:1234", options.endpoint());
  auto o = internal::MakeOptions(std::move(options));
  EXPECT_EQ("http://localhost:1234/storage/v1", internal::JsonEndpoint(o));
  EXPECT_EQ("http://localhost:1234/upload/storage/v1",
            internal::JsonUploadEndpoint(o));
  EXPECT_EQ("http://localhost:1234", internal::XmlEndpoint(o));
  EXPECT_EQ("http://localhost:1234/iamapi", internal::IamEndpoint(o));
}

TEST_F(ClientOptionsTest, SetVersion) {
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  options.set_version("vTest");
  EXPECT_EQ("vTest", options.version());
  auto o = internal::MakeOptions(std::move(options));
  EXPECT_EQ("https://storage.googleapis.com/storage/vTest",
            internal::JsonEndpoint(o));
  EXPECT_EQ("https://storage.googleapis.com/upload/storage/vTest",
            internal::JsonUploadEndpoint(o));
}

TEST_F(ClientOptionsTest, SetIamEndpoint) {
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  options.set_iam_endpoint("http://localhost:1/v2");
  EXPECT_EQ("http://localhost:1/v2", options.iam_endpoint());
}

TEST_F(ClientOptionsTest, SetCredentials) {
  auto creds = oauth2::CreateAnonymousCredentials();
  ClientOptions options(creds);
  auto other = oauth2::CreateAnonymousCredentials();
  options.set_credentials(other);
  EXPECT_TRUE(other.get() == options.credentials().get());
  EXPECT_FALSE(creds.get() == other.get());
}

TEST_F(ClientOptionsTest, ProjectIdFromEnvironment) {
  google::cloud::testing_util::SetEnv("GOOGLE_CLOUD_PROJECT",
                                      "test-project-id");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("test-project-id", options.project_id());
}

TEST_F(ClientOptionsTest, ProjectIdFromEnvironmentNotSet) {
  google::cloud::testing_util::UnsetEnv("GOOGLE_CLOUD_PROJECT");
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("", options.project_id());
}

TEST_F(ClientOptionsTest, SetProjectId) {
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  options.set_project_id("test-project-id");
  EXPECT_EQ("test-project-id", options.project_id());
}

TEST_F(ClientOptionsTest, SetDownloadBufferSize) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_size = client_options.download_buffer_size();
  EXPECT_NE(0U, default_size);
  client_options.SetDownloadBufferSize(1024);
  EXPECT_EQ(1024, client_options.download_buffer_size());
  client_options.SetDownloadBufferSize(0);
  EXPECT_EQ(default_size, client_options.download_buffer_size());
}

TEST_F(ClientOptionsTest, SetUploadBufferSize) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_size = client_options.upload_buffer_size();
  EXPECT_NE(0U, default_size);
  client_options.SetUploadBufferSize(1024);
  EXPECT_EQ(1024, client_options.upload_buffer_size());
  client_options.SetUploadBufferSize(0);
  EXPECT_EQ(default_size, client_options.upload_buffer_size());
}

TEST_F(ClientOptionsTest, UserAgentPrefix) {
  ClientOptions options(oauth2::CreateAnonymousCredentials());
  EXPECT_EQ("", options.user_agent_prefix());
  options.add_user_agent_prefix("foo-1.0");
  EXPECT_EQ("foo-1.0", options.user_agent_prefix());
  options.add_user_agent_prefix("bar-2.2");
  EXPECT_EQ("bar-2.2 foo-1.0", options.user_agent_prefix());
}

TEST_F(ClientOptionsTest, SetMaximumSimpleUploadSize) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_size = client_options.maximum_simple_upload_size();
  EXPECT_NE(0U, default_size);
  client_options.set_maximum_simple_upload_size(1024);
  EXPECT_EQ(1024, client_options.maximum_simple_upload_size());
  client_options.set_maximum_simple_upload_size(0);
  EXPECT_EQ(0, client_options.maximum_simple_upload_size());
}

TEST_F(ClientOptionsTest, SetEnableLockingCallbacks) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_value = client_options.enable_ssl_locking_callbacks();
  EXPECT_TRUE(default_value);
  client_options.set_enable_ssl_locking_callbacks(false);
  EXPECT_FALSE(client_options.enable_ssl_locking_callbacks());
  client_options.set_enable_ssl_locking_callbacks(true);
  EXPECT_TRUE(client_options.enable_ssl_locking_callbacks());
}

TEST_F(ClientOptionsTest, SetMaximumSocketRecvSize) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_value = client_options.maximum_socket_recv_size();
  EXPECT_EQ(0, default_value);
  client_options.set_maximum_socket_recv_size(16 * 1024);
  EXPECT_EQ(16 * 1024, client_options.maximum_socket_recv_size());
}

TEST_F(ClientOptionsTest, SetMaximumSocketSendSize) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_value = client_options.maximum_socket_send_size();
  EXPECT_EQ(0, default_value);
  client_options.set_maximum_socket_send_size(16 * 1024);
  EXPECT_EQ(16 * 1024, client_options.maximum_socket_send_size());
}

TEST_F(ClientOptionsTest, SetMaximumDownloadStall) {
  ClientOptions client_options(oauth2::CreateAnonymousCredentials());
  auto default_value = client_options.download_stall_timeout();
  EXPECT_NE(0, default_value.count());
  client_options.set_download_stall_timeout(std::chrono::seconds(60));
  EXPECT_EQ(60, client_options.download_stall_timeout().count());
}

TEST_F(ClientOptionsTest, MakeOptionsFromDefault) {
  google::cloud::testing_util::SetEnv("GOOGLE_CLOUD_PROJECT",
                                      "test-project-id");
  auto const opts = internal::MakeOptions(
      ClientOptions(oauth2::CreateAnonymousCredentials()));
  EXPECT_EQ("https://storage.googleapis.com", opts.get<RestEndpointOption>());
  EXPECT_EQ("https://iamcredentials.googleapis.com/v1",
            opts.get<IamEndpointOption>());
  EXPECT_TRUE(opts.has<Oauth2CredentialsOption>());
  EXPECT_EQ("v1", opts.get<internal::TargetApiVersionOption>());
  EXPECT_EQ("test-project-id", opts.get<ProjectIdOption>());
  EXPECT_LT(0, opts.get<ConnectionPoolSizeOption>());
  EXPECT_LT(0, opts.get<DownloadBufferSizeOption>());
  EXPECT_LT(0, opts.get<DownloadStallMinimumRateOption>());
  EXPECT_LT(0, opts.get<UploadBufferSizeOption>());
  EXPECT_LT(0, opts.get<MaximumSimpleUploadSizeOption>());
  EXPECT_TRUE(opts.has<EnableCurlSslLockingOption>());
  EXPECT_TRUE(opts.has<EnableCurlSigpipeHandlerOption>());
  EXPECT_EQ(0, opts.get<MaximumCurlSocketSendSizeOption>());
  EXPECT_EQ(0, opts.get<MaximumCurlSocketRecvSizeOption>());
  EXPECT_LT(0, opts.get<TransferStallTimeoutOption>().count());
  EXPECT_LT(0, opts.get<TransferStallMinimumRateOption>());
  EXPECT_THAT(opts.get<CARootsFilePathOption>(), IsEmpty());
}

TEST_F(ClientOptionsTest, DefaultOptions) {
  auto o = internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_EQ("https://storage.googleapis.com", o.get<RestEndpointOption>());

  // Verify any set values are respected overridden.
  o = internal::DefaultOptions(
      oauth2::CreateAnonymousCredentials(),
      Options{}.set<RestEndpointOption>("https://private.googleapis.com"));
  EXPECT_EQ("https://private.googleapis.com", o.get<RestEndpointOption>());

  o = internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_EQ("https://storage.googleapis.com", o.get<RestEndpointOption>());
  EXPECT_EQ("https://iamcredentials.googleapis.com/v1",
            o.get<IamEndpointOption>());

  EXPECT_EQ("v1", o.get<internal::TargetApiVersionOption>());
  EXPECT_LT(0, o.get<ConnectionPoolSizeOption>());
  EXPECT_LT(0, o.get<DownloadBufferSizeOption>());
  EXPECT_LT(0, o.get<UploadBufferSizeOption>());
  EXPECT_LE(0, o.get<MaximumSimpleUploadSizeOption>());
  EXPECT_TRUE(o.get<EnableCurlSslLockingOption>());
  EXPECT_TRUE(o.get<EnableCurlSigpipeHandlerOption>());
  EXPECT_EQ(0, o.get<MaximumCurlSocketRecvSizeOption>());
  EXPECT_EQ(0, o.get<MaximumCurlSocketSendSizeOption>());
  EXPECT_LT(std::chrono::seconds(0), o.get<TransferStallTimeoutOption>());
  EXPECT_LT(0, o.get<TransferStallMinimumRateOption>());
  EXPECT_LT(std::chrono::seconds(0), o.get<DownloadStallTimeoutOption>());
  EXPECT_LT(0, o.get<DownloadStallMinimumRateOption>());

  namespace rest = ::google::cloud::rest_internal;
  EXPECT_EQ(o.get<rest::DownloadStallTimeoutOption>(),
            o.get<DownloadStallTimeoutOption>());
  EXPECT_EQ(o.get<rest::DownloadStallMinimumRateOption>(),
            o.get<DownloadStallMinimumRateOption>());
  EXPECT_EQ(o.get<rest::TransferStallTimeoutOption>(),
            o.get<TransferStallTimeoutOption>());
  EXPECT_EQ(o.get<rest::TransferStallMinimumRateOption>(),
            o.get<TransferStallMinimumRateOption>());
  EXPECT_EQ(o.get<rest::MaximumCurlSocketRecvSizeOption>(),
            o.get<MaximumCurlSocketRecvSizeOption>());
  EXPECT_EQ(o.get<rest::MaximumCurlSocketSendSizeOption>(),
            o.get<MaximumCurlSocketSendSizeOption>());
  EXPECT_EQ(o.get<rest::ConnectionPoolSizeOption>(),
            o.get<ConnectionPoolSizeOption>());
  EXPECT_EQ(o.get<rest::EnableCurlSslLockingOption>(),
            o.get<EnableCurlSslLockingOption>());
  EXPECT_EQ(o.get<rest::EnableCurlSigpipeHandlerOption>(),
            o.get<EnableCurlSigpipeHandlerOption>());

  EXPECT_FALSE(o.has<rest::HttpVersionOption>());
  EXPECT_FALSE(o.has<rest::CAPathOption>());
}

TEST_F(ClientOptionsTest, HttpVersion) {
  namespace rest = ::google::cloud::rest_internal;
  auto const options = internal::DefaultOptions(
      oauth2::CreateAnonymousCredentials(),
      Options{}.set<storage_experimental::HttpVersionOption>("2.0"));
  EXPECT_EQ("2.0", options.get<rest::HttpVersionOption>());
}

TEST_F(ClientOptionsTest, CAPathOption) {
  namespace rest = ::google::cloud::rest_internal;
  auto const options = internal::DefaultOptions(
      oauth2::CreateAnonymousCredentials(),
      Options{}.set<internal::CAPathOption>("test-only"));
  EXPECT_EQ("test-only", options.get<rest::CAPathOption>());
}

TEST_F(ClientOptionsTest, TracingWithoutEnv) {
  ScopedEnvironment env_common("GOOGLE_CLOUD_CPP_ENABLE_TRACING",
                               absl::nullopt);
  ScopedEnvironment env("CLOUD_STORAGE_ENABLE_TRACING", absl::nullopt);
  auto const options =
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_FALSE(options.has<TracingComponentsOption>());
}

TEST_F(ClientOptionsTest, TracingWithEnv) {
  ScopedEnvironment env_common("GOOGLE_CLOUD_CPP_ENABLE_TRACING",
                               absl::nullopt);
  ScopedEnvironment env("CLOUD_STORAGE_ENABLE_TRACING", "rpc,http");
  auto const options =
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_THAT(options.get<TracingComponentsOption>(),
              UnorderedElementsAre("rpc", "http"));
}

TEST_F(ClientOptionsTest, ProjectIdWithoutEnv) {
  ScopedEnvironment env("GOOGLE_CLOUD_PROJECT", absl::nullopt);
  auto const options =
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_FALSE(options.has<ProjectIdOption>());
}

TEST_F(ClientOptionsTest, ProjecIdtWithEnv) {
  ScopedEnvironment env("GOOGLE_CLOUD_PROJECT", "my-project");
  auto const options =
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), {});
  EXPECT_EQ("my-project", options.get<ProjectIdOption>());
}

TEST_F(ClientOptionsTest, OverrideWithRestInternal) {
  namespace rest = ::google::cloud::rest_internal;
  auto const options =
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(),
                               Options{}
                                   .set<rest::ConnectionPoolSizeOption>(1234)
                                   .set<ConnectionPoolSizeOption>(2345));
  EXPECT_EQ(1234, options.get<rest::ConnectionPoolSizeOption>());
  EXPECT_EQ(2345, options.get<ConnectionPoolSizeOption>());
}

TEST_F(ClientOptionsTest, Timeouts) {
  EXPECT_EQ(std::chrono::seconds(42),
            internal::DefaultOptions(oauth2::CreateAnonymousCredentials(),
                                     Options{}.set<TransferStallTimeoutOption>(
                                         std::chrono::seconds(42)))
                .get<DownloadStallTimeoutOption>());

  EXPECT_EQ(std::chrono::seconds(7),
            internal::DefaultOptions(
                oauth2::CreateAnonymousCredentials(),
                Options{}
                    .set<TransferStallTimeoutOption>(std::chrono::seconds(42))
                    .set<DownloadStallTimeoutOption>(std::chrono::seconds(7)))
                .get<DownloadStallTimeoutOption>());

  EXPECT_EQ(std::chrono::seconds(7),
            internal::DefaultOptions(oauth2::CreateAnonymousCredentials(),
                                     Options{}.set<DownloadStallTimeoutOption>(
                                         std::chrono::seconds(7)))
                .get<DownloadStallTimeoutOption>());

  EXPECT_NE(
      std::chrono::seconds(0),
      internal::DefaultOptions(oauth2::CreateAnonymousCredentials(), Options{})
          .get<DownloadStallTimeoutOption>());
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google

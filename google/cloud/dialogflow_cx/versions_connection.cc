// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dialogflow/cx/v3/version.proto

#include "google/cloud/dialogflow_cx/versions_connection.h"
#include "google/cloud/dialogflow_cx/internal/versions_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/versions_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/versions_stub_factory.h"
#include "google/cloud/dialogflow_cx/internal/versions_tracing_connection.h"
#include "google/cloud/dialogflow_cx/versions_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsConnection::~VersionsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Version>
VersionsConnection::ListVersions(
    google::cloud::dialogflow::cx::v3::
        ListVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Version>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Version>
VersionsConnection::GetVersion(
    google::cloud::dialogflow::cx::v3::GetVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Version>>
VersionsConnection::CreateVersion(
    google::cloud::dialogflow::cx::v3::CreateVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::cx::v3::Version>
VersionsConnection::UpdateVersion(
    google::cloud::dialogflow::cx::v3::UpdateVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status VersionsConnection::DeleteVersion(
    google::cloud::dialogflow::cx::v3::DeleteVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::protobuf::Struct>> VersionsConnection::LoadVersion(
    google::cloud::dialogflow::cx::v3::LoadVersionRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
VersionsConnection::CompareVersions(
    google::cloud::dialogflow::cx::v3::CompareVersionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<VersionsConnection> MakeVersionsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VersionsPolicyOptionList>(options, __func__);
  options = dialogflow_cx_internal::VersionsDefaultOptions(location,
                                                           std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_cx_internal::CreateDefaultVersionsStub(std::move(auth),
                                                                options);
  return dialogflow_cx_internal::MakeVersionsTracingConnection(
      std::make_shared<dialogflow_cx_internal::VersionsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<VersionsConnection> MakeVersionsConnection(Options options) {
  return MakeVersionsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

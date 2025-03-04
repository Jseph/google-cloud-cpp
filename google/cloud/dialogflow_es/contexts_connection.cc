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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/contexts_connection.h"
#include "google/cloud/dialogflow_es/contexts_options.h"
#include "google/cloud/dialogflow_es/internal/contexts_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/contexts_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/contexts_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/contexts_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContextsConnection::~ContextsConnection() = default;

StreamRange<google::cloud::dialogflow::v2::Context>
ContextsConnection::ListContexts(
    google::cloud::dialogflow::v2::
        ListContextsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Context>>();
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsConnection::GetContext(
    google::cloud::dialogflow::v2::GetContextRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsConnection::CreateContext(
    google::cloud::dialogflow::v2::CreateContextRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsConnection::UpdateContext(
    google::cloud::dialogflow::v2::UpdateContextRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ContextsConnection::DeleteContext(
    google::cloud::dialogflow::v2::DeleteContextRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ContextsConnection::DeleteAllContexts(
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ContextsConnection> MakeContextsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ContextsPolicyOptionList>(options, __func__);
  options = dialogflow_es_internal::ContextsDefaultOptions(location,
                                                           std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultContextsStub(std::move(auth),
                                                                options);
  return dialogflow_es_internal::MakeContextsTracingConnection(
      std::make_shared<dialogflow_es_internal::ContextsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<ContextsConnection> MakeContextsConnection(Options options) {
  return MakeContextsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

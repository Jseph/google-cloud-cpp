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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#include "google/cloud/dialogflow_es/session_entity_types_connection.h"
#include "google/cloud/dialogflow_es/internal/session_entity_types_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/session_entity_types_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/session_entity_types_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/session_entity_types_tracing_connection.h"
#include "google/cloud/dialogflow_es/session_entity_types_options.h"
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

SessionEntityTypesConnection::~SessionEntityTypesConnection() = default;

StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesConnection::ListSessionEntityTypes(
    google::cloud::dialogflow::v2::
        ListSessionEntityTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::SessionEntityType>>();
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesConnection::GetSessionEntityType(
    google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesConnection::CreateSessionEntityType(
    google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesConnection::UpdateSessionEntityType(
    google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SessionEntityTypesConnection::DeleteSessionEntityType(
    google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SessionEntityTypesConnection> MakeSessionEntityTypesConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SessionEntityTypesPolicyOptionList>(options,
                                                                     __func__);
  options = dialogflow_es_internal::SessionEntityTypesDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultSessionEntityTypesStub(
      std::move(auth), options);
  return dialogflow_es_internal::MakeSessionEntityTypesTracingConnection(
      std::make_shared<
          dialogflow_es_internal::SessionEntityTypesConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<SessionEntityTypesConnection> MakeSessionEntityTypesConnection(
    Options options) {
  return MakeSessionEntityTypesConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

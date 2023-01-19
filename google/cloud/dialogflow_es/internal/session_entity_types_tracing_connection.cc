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

#include "google/cloud/dialogflow_es/internal/session_entity_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionEntityTypesTracingConnection::SessionEntityTypesTracingConnection(
    std::shared_ptr<dialogflow_es::SessionEntityTypesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesTracingConnection::ListSessionEntityTypes(
    google::cloud::dialogflow::v2::ListSessionEntityTypesRequest request) {
  return child_->ListSessionEntityTypes(request);
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesTracingConnection::GetSessionEntityType(
    google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::SessionEntityTypesConnection::GetSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSessionEntityType(request));
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesTracingConnection::CreateSessionEntityType(
    google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::SessionEntityTypesConnection::CreateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSessionEntityType(request));
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesTracingConnection::UpdateSessionEntityType(
    google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::SessionEntityTypesConnection::UpdateSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSessionEntityType(request));
}

Status SessionEntityTypesTracingConnection::DeleteSessionEntityType(
    google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::SessionEntityTypesConnection::DeleteSessionEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSessionEntityType(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

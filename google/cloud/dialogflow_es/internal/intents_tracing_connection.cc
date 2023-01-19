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
// source: google/cloud/dialogflow/v2/intent.proto

#include "google/cloud/dialogflow_es/internal/intents_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IntentsTracingConnection::IntentsTracingConnection(
    std::shared_ptr<dialogflow_es::IntentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::Intent>
IntentsTracingConnection::ListIntents(
    google::cloud::dialogflow::v2::ListIntentsRequest request) {
  return child_->ListIntents(request);
}

StatusOr<google::cloud::dialogflow::v2::Intent>
IntentsTracingConnection::GetIntent(
    google::cloud::dialogflow::v2::GetIntentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_es::IntentsConnection::GetIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIntent(request));
}

StatusOr<google::cloud::dialogflow::v2::Intent>
IntentsTracingConnection::CreateIntent(
    google::cloud::dialogflow::v2::CreateIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::IntentsConnection::CreateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateIntent(request));
}

StatusOr<google::cloud::dialogflow::v2::Intent>
IntentsTracingConnection::UpdateIntent(
    google::cloud::dialogflow::v2::UpdateIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::IntentsConnection::UpdateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateIntent(request));
}

Status IntentsTracingConnection::DeleteIntent(
    google::cloud::dialogflow::v2::DeleteIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_es::IntentsConnection::DeleteIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteIntent(request));
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateIntentsResponse>>
IntentsTracingConnection::BatchUpdateIntents(
    google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request) {
  return child_->BatchUpdateIntents(request);
}

future<StatusOr<google::protobuf::Struct>>
IntentsTracingConnection::BatchDeleteIntents(
    google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request) {
  return child_->BatchDeleteIntents(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

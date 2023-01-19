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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/internal/executions_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExecutionsTracingConnection::ExecutionsTracingConnection(
    std::shared_ptr<workflows::ExecutionsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingConnection::ListExecutions(
    google::cloud::workflows::executions::v1::ListExecutionsRequest request) {
  return child_->ListExecutions(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingConnection::CreateExecution(
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request) {
  auto span =
      internal::MakeSpan("workflows::ExecutionsConnection::CreateExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateExecution(request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingConnection::GetExecution(
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request) {
  auto span =
      internal::MakeSpan("workflows::ExecutionsConnection::GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetExecution(request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingConnection::CancelExecution(
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request) {
  auto span =
      internal::MakeSpan("workflows::ExecutionsConnection::CancelExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelExecution(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_internal
}  // namespace cloud
}  // namespace google

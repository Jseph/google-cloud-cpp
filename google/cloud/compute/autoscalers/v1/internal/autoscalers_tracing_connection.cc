// Copyright 2023 Google LLC
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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AutoscalersTracingConnection::AutoscalersTracingConnection(
    std::shared_ptr<compute_autoscalers_v1::AutoscalersConnection> child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::AutoscalersScopedList>>
AutoscalersTracingConnection::AggregatedListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::"
      "AggregatedListAutoscalers");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListAutoscalers(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::AutoscalersScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersTracingConnection::DeleteAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::DeleteAutoscaler");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAutoscaler(request));
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersTracingConnection::GetAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::GetAutoscaler");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAutoscaler(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersTracingConnection::InsertAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::InsertAutoscaler");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertAutoscaler(request));
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersTracingConnection::ListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::ListAutoscalers");
  internal::OTelScope scope(span);
  auto sr = child_->ListAutoscalers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Autoscaler>(std::move(span),
                                                   std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersTracingConnection::PatchAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::PatchAutoscaler");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchAutoscaler(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersTracingConnection::UpdateAutoscaler(
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_autoscalers_v1::AutoscalersConnection::UpdateAutoscaler");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateAutoscaler(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_autoscalers_v1::AutoscalersConnection>
MakeAutoscalersTracingConnection(
    std::shared_ptr<compute_autoscalers_v1::AutoscalersConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AutoscalersTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google

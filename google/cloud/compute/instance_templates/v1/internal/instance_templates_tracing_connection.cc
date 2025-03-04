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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstanceTemplatesTracingConnection::InstanceTemplatesTracingConnection(
    std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::InstanceTemplatesScopedList>>
InstanceTemplatesTracingConnection::AggregatedListInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        AggregatedListInstanceTemplatesRequest request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "AggregatedListInstanceTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListInstanceTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::InstanceTemplatesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesTracingConnection::DeleteInstanceTemplate(
    google::cloud::cpp::compute::instance_templates::v1::
        DeleteInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "DeleteInstanceTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInstanceTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesTracingConnection::GetInstanceTemplate(
    google::cloud::cpp::compute::instance_templates::v1::
        GetInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "GetInstanceTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceTemplate(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::instance_templates::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesTracingConnection::InsertInstanceTemplate(
    google::cloud::cpp::compute::instance_templates::v1::
        InsertInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "InsertInstanceTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInstanceTemplate(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesTracingConnection::ListInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        ListInstanceTemplatesRequest request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "ListInstanceTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstanceTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceTemplate>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::instance_templates::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstanceTemplatesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::instance_templates::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_templates_v1::InstanceTemplatesConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection>
MakeInstanceTemplatesTracingConnection(
    std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<InstanceTemplatesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

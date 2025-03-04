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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/domain_mappings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DomainMappingsTracingConnection::DomainMappingsTracingConnection(
    std::shared_ptr<appengine_v1::DomainMappingsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::appengine::v1::DomainMapping>
DomainMappingsTracingConnection::ListDomainMappings(
    google::appengine::v1::ListDomainMappingsRequest request) {
  auto span = internal::MakeSpan(
      "appengine_v1::DomainMappingsConnection::ListDomainMappings");
  internal::OTelScope scope(span);
  auto sr = child_->ListDomainMappings(std::move(request));
  return internal::MakeTracedStreamRange<google::appengine::v1::DomainMapping>(
      std::move(span), std::move(sr));
}

StatusOr<google::appengine::v1::DomainMapping>
DomainMappingsTracingConnection::GetDomainMapping(
    google::appengine::v1::GetDomainMappingRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::DomainMappingsConnection::GetDomainMapping");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDomainMapping(request));
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsTracingConnection::CreateDomainMapping(
    google::appengine::v1::CreateDomainMappingRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::DomainMappingsConnection::CreateDomainMapping");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDomainMapping(request));
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsTracingConnection::UpdateDomainMapping(
    google::appengine::v1::UpdateDomainMappingRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::DomainMappingsConnection::UpdateDomainMapping");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDomainMapping(request));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
DomainMappingsTracingConnection::DeleteDomainMapping(
    google::appengine::v1::DeleteDomainMappingRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::DomainMappingsConnection::DeleteDomainMapping");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDomainMapping(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<appengine_v1::DomainMappingsConnection>
MakeDomainMappingsTracingConnection(
    std::shared_ptr<appengine_v1::DomainMappingsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DomainMappingsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

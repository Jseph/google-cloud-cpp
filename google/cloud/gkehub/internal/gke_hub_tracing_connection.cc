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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/internal/gke_hub_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GkeHubTracingConnection::GkeHubTracingConnection(
    std::shared_ptr<gkehub::GkeHubConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::gkehub::v1::Membership>
GkeHubTracingConnection::ListMemberships(
    google::cloud::gkehub::v1::ListMembershipsRequest request) {
  return child_->ListMemberships(request);
}

StreamRange<google::cloud::gkehub::v1::Feature>
GkeHubTracingConnection::ListFeatures(
    google::cloud::gkehub::v1::ListFeaturesRequest request) {
  return child_->ListFeatures(request);
}

StatusOr<google::cloud::gkehub::v1::Membership>
GkeHubTracingConnection::GetMembership(
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  auto span = internal::MakeSpan("gkehub::GkeHubConnection::GetMembership");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMembership(request));
}

StatusOr<google::cloud::gkehub::v1::Feature>
GkeHubTracingConnection::GetFeature(
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  auto span = internal::MakeSpan("gkehub::GkeHubConnection::GetFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeature(request));
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubTracingConnection::CreateMembership(
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  return child_->CreateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubTracingConnection::CreateFeature(
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  return child_->CreateFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubTracingConnection::DeleteMembership(
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  return child_->DeleteMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubTracingConnection::DeleteFeature(
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  return child_->DeleteFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubTracingConnection::UpdateMembership(
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  return child_->UpdateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubTracingConnection::UpdateFeature(
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  return child_->UpdateFeature(request);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubTracingConnection::GenerateConnectManifest(
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  auto span =
      internal::MakeSpan("gkehub::GkeHubConnection::GenerateConnectManifest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateConnectManifest(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google

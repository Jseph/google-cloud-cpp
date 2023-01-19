// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/internal/secret_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecretManagerServiceTracingConnection::SecretManagerServiceTracingConnection(
    std::shared_ptr<secretmanager::SecretManagerServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingConnection::ListSecrets(
    google::cloud::secretmanager::v1::ListSecretsRequest request) {
  return child_->ListSecrets(request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingConnection::CreateSecret(
    google::cloud::secretmanager::v1::CreateSecretRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::CreateSecret");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSecret(request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::AddSecretVersion(
    google::cloud::secretmanager::v1::AddSecretVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::AddSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AddSecretVersion(request));
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingConnection::GetSecret(
    google::cloud::secretmanager::v1::GetSecretRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::GetSecret");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSecret(request));
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingConnection::UpdateSecret(
    google::cloud::secretmanager::v1::UpdateSecretRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::UpdateSecret");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSecret(request));
}

Status SecretManagerServiceTracingConnection::DeleteSecret(
    google::cloud::secretmanager::v1::DeleteSecretRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::DeleteSecret");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSecret(request));
}

StreamRange<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::ListSecretVersions(
    google::cloud::secretmanager::v1::ListSecretVersionsRequest request) {
  return child_->ListSecretVersions(request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::GetSecretVersion(
    google::cloud::secretmanager::v1::GetSecretVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::GetSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSecretVersion(request));
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceTracingConnection::AccessSecretVersion(
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::AccessSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AccessSecretVersion(request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::DisableSecretVersion(
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::DisableSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DisableSecretVersion(request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::EnableSecretVersion(
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::EnableSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->EnableSecretVersion(request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingConnection::DestroySecretVersion(
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::DestroySecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DestroySecretVersion(request));
}

StatusOr<google::iam::v1::Policy>
SecretManagerServiceTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
SecretManagerServiceTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "secretmanager::SecretManagerServiceConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google

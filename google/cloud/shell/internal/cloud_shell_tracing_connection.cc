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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/internal/cloud_shell_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudShellServiceTracingConnection::CloudShellServiceTracingConnection(
    std::shared_ptr<shell::CloudShellServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceTracingConnection::GetEnvironment(
    google::cloud::shell::v1::GetEnvironmentRequest const& request) {
  auto span =
      internal::MakeSpan("shell::CloudShellServiceConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
CloudShellServiceTracingConnection::StartEnvironment(
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  return child_->StartEnvironment(request);
}

future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
CloudShellServiceTracingConnection::AuthorizeEnvironment(
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  return child_->AuthorizeEnvironment(request);
}

future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
CloudShellServiceTracingConnection::AddPublicKey(
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  return child_->AddPublicKey(request);
}

future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
CloudShellServiceTracingConnection::RemovePublicKey(
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  return child_->RemovePublicKey(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_internal
}  // namespace cloud
}  // namespace google

// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#include "google/cloud/iam/internal/iam_credentials_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IAMCredentialsTracingConnection::IAMCredentialsTracingConnection(
    std::shared_ptr<iam::IAMCredentialsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
IAMCredentialsTracingConnection::GenerateAccessToken(
    google::iam::credentials::v1::GenerateAccessTokenRequest const& request) {
  auto span =
      internal::MakeSpan("iam::IAMCredentialsConnection::GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAccessToken(request));
}

StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
IAMCredentialsTracingConnection::GenerateIdToken(
    google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
  auto span =
      internal::MakeSpan("iam::IAMCredentialsConnection::GenerateIdToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateIdToken(request));
}

StatusOr<google::iam::credentials::v1::SignBlobResponse>
IAMCredentialsTracingConnection::SignBlob(
    google::iam::credentials::v1::SignBlobRequest const& request) {
  auto span = internal::MakeSpan("iam::IAMCredentialsConnection::SignBlob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SignBlob(request));
}

StatusOr<google::iam::credentials::v1::SignJwtResponse>
IAMCredentialsTracingConnection::SignJwt(
    google::iam::credentials::v1::SignJwtRequest const& request) {
  auto span = internal::MakeSpan("iam::IAMCredentialsConnection::SignJwt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SignJwt(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google

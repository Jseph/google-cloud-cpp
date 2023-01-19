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
// source: google/cloud/talent/v4/company_service.proto

#include "google/cloud/talent/internal/company_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CompanyServiceTracingConnection::CompanyServiceTracingConnection(
    std::shared_ptr<talent::CompanyServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceTracingConnection::CreateCompany(
    google::cloud::talent::v4::CreateCompanyRequest const& request) {
  auto span =
      internal::MakeSpan("talent::CompanyServiceConnection::CreateCompany");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCompany(request));
}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceTracingConnection::GetCompany(
    google::cloud::talent::v4::GetCompanyRequest const& request) {
  auto span =
      internal::MakeSpan("talent::CompanyServiceConnection::GetCompany");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCompany(request));
}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceTracingConnection::UpdateCompany(
    google::cloud::talent::v4::UpdateCompanyRequest const& request) {
  auto span =
      internal::MakeSpan("talent::CompanyServiceConnection::UpdateCompany");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCompany(request));
}

Status CompanyServiceTracingConnection::DeleteCompany(
    google::cloud::talent::v4::DeleteCompanyRequest const& request) {
  auto span =
      internal::MakeSpan("talent::CompanyServiceConnection::DeleteCompany");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteCompany(request));
}

StreamRange<google::cloud::talent::v4::Company>
CompanyServiceTracingConnection::ListCompanies(
    google::cloud::talent::v4::ListCompaniesRequest request) {
  return child_->ListCompanies(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google

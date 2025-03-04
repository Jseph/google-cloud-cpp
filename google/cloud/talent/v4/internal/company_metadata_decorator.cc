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

#include "google/cloud/talent/v4/internal/company_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/company_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompanyServiceMetadata::CompanyServiceMetadata(
    std::shared_ptr<CompanyServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceMetadata::CreateCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateCompanyRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCompany(context, request);
}

StatusOr<google::cloud::talent::v4::Company> CompanyServiceMetadata::GetCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::GetCompanyRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCompany(context, request);
}

StatusOr<google::cloud::talent::v4::Company>
CompanyServiceMetadata::UpdateCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::UpdateCompanyRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("company.name=",
                           internal::UrlEncode(request.company().name())));
  return child_->UpdateCompany(context, request);
}

Status CompanyServiceMetadata::DeleteCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::DeleteCompanyRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCompany(context, request);
}

StatusOr<google::cloud::talent::v4::ListCompaniesResponse>
CompanyServiceMetadata::ListCompanies(
    grpc::ClientContext& context,
    google::cloud::talent::v4::ListCompaniesRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCompanies(context, request);
}

void CompanyServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CompanyServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

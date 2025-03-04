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
// source: google/cloud/storageinsights/v1/storageinsights.proto

#include "google/cloud/storageinsights/v1/internal/storage_insights_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/storageinsights/v1/storageinsights.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storageinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageInsightsMetadata::StorageInsightsMetadata(
    std::shared_ptr<StorageInsightsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::storageinsights::v1::ListReportConfigsResponse>
StorageInsightsMetadata::ListReportConfigs(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::ListReportConfigsRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReportConfigs(context, request);
}

StatusOr<google::cloud::storageinsights::v1::ReportConfig>
StorageInsightsMetadata::GetReportConfig(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::GetReportConfigRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetReportConfig(context, request);
}

StatusOr<google::cloud::storageinsights::v1::ReportConfig>
StorageInsightsMetadata::CreateReportConfig(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::CreateReportConfigRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateReportConfig(context, request);
}

StatusOr<google::cloud::storageinsights::v1::ReportConfig>
StorageInsightsMetadata::UpdateReportConfig(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::UpdateReportConfigRequest const&
        request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("report_config.name=",
                   internal::UrlEncode(request.report_config().name())));
  return child_->UpdateReportConfig(context, request);
}

Status StorageInsightsMetadata::DeleteReportConfig(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::DeleteReportConfigRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteReportConfig(context, request);
}

StatusOr<google::cloud::storageinsights::v1::ListReportDetailsResponse>
StorageInsightsMetadata::ListReportDetails(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::ListReportDetailsRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReportDetails(context, request);
}

StatusOr<google::cloud::storageinsights::v1::ReportDetail>
StorageInsightsMetadata::GetReportDetail(
    grpc::ClientContext& context,
    google::cloud::storageinsights::v1::GetReportDetailRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetReportDetail(context, request);
}

void StorageInsightsMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void StorageInsightsMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace storageinsights_v1_internal
}  // namespace cloud
}  // namespace google

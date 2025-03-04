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
// source: google/cloud/run/v2/revision.proto

#include "google/cloud/run/v2/internal/revisions_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/run/v2/revision.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RevisionsMetadata::RevisionsMetadata(
    std::shared_ptr<RevisionsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::run::v2::Revision> RevisionsMetadata::GetRevision(
    grpc::ClientContext& context,
    google::cloud::run::v2::GetRevisionRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::GetRevisionRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::GetRevisionRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->GetRevision(context, request);
}

StatusOr<google::cloud::run::v2::ListRevisionsResponse>
RevisionsMetadata::ListRevisions(
    grpc::ClientContext& context,
    google::cloud::run::v2::ListRevisionsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::ListRevisionsRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::ListRevisionsRequest const& request)
                 -> std::string const& { return request.parent(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->ListRevisions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
RevisionsMetadata::AsyncDeleteRevision(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::run::v2::DeleteRevisionRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* location_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::cloud::run::v2::DeleteRevisionRequest>{
        "location=",
        {
            {[](google::cloud::run::v2::DeleteRevisionRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"projects/[^/]+/locations/([^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  location_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, options);
  } else {
    SetMetadata(*context, options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncDeleteRevision(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
RevisionsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> RevisionsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void RevisionsMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void RevisionsMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

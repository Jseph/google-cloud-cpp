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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#include "google/cloud/compute/target_pools/v1/internal/target_pools_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_pools_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetPoolsRestMetadata::TargetPoolsRestMetadata(
    std::shared_ptr<TargetPoolsRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncAddHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::AddHealthCheckRequest const&
        request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncAddHealthCheck(cq, std::move(rest_context), options,
                                     request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncAddInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
        request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncAddInstance(cq, std::move(rest_context), options,
                                  request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
TargetPoolsRestMetadata::AggregatedListTargetPools(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_pools::v1::
        AggregatedListTargetPoolsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListTargetPools(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncDeleteTargetPool(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::
        DeleteTargetPoolRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncDeleteTargetPool(cq, std::move(rest_context), options,
                                       request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetPool>
TargetPoolsRestMetadata::GetTargetPool(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_pools::v1::GetTargetPoolRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetTargetPool(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>
TargetPoolsRestMetadata::GetHealth(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetHealth(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncInsertTargetPool(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::
        InsertTargetPoolRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncInsertTargetPool(cq, std::move(rest_context), options,
                                       request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolList>
TargetPoolsRestMetadata::ListTargetPools(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_pools::v1::ListTargetPoolsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListTargetPools(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncRemoveHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::
        RemoveHealthCheckRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncRemoveHealthCheck(cq, std::move(rest_context), options,
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncRemoveInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::RemoveInstanceRequest const&
        request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncRemoveInstance(cq, std::move(rest_context), options,
                                     request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncSetBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
        request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncSetBackup(cq, std::move(rest_context), options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncSetSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::target_pools::v1::
        SetSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncSetSecurityPolicy(cq, std::move(rest_context), options,
                                        request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                   request);
}

future<Status> TargetPoolsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), options,
                                      request);
}

void TargetPoolsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1_internal
}  // namespace cloud
}  // namespace google

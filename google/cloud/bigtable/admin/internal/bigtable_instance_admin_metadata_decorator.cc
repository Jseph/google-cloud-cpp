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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableInstanceAdminMetadata::BigtableInstanceAdminMetadata(
    std::shared_ptr<BigtableInstanceAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateInstance(cq, std::move(context), options, request);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminMetadata::GetInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetInstanceRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInstance(context, request);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminMetadata::ListInstances(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListInstancesRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInstances(context, request);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminMetadata::UpdateInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::Instance const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncPartialUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("instance.name=",
                           internal::UrlEncode(request.instance().name())));
  return child_->AsyncPartialUpdateInstance(cq, std::move(context), options,
                                            request);
}

Status BigtableInstanceAdminMetadata::DeleteInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCluster(cq, std::move(context), options, request);
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminMetadata::GetCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetClusterRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCluster(context, request);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminMetadata::ListClusters(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListClustersRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::Cluster const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncPartialUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("cluster.name=",
                           internal::UrlEncode(request.cluster().name())));
  return child_->AsyncPartialUpdateCluster(cq, std::move(context), options,
                                           request);
}

Status BigtableInstanceAdminMetadata::DeleteCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteClusterRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCluster(context, request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminMetadata::CreateAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAppProfile(context, request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminMetadata::GetAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetAppProfileRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAppProfile(context, request);
}

StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
BigtableInstanceAdminMetadata::ListAppProfiles(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListAppProfilesRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAppProfiles(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncUpdateAppProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("app_profile.name=",
                           internal::UrlEncode(request.app_profile().name())));
  return child_->AsyncUpdateAppProfile(cq, std::move(context), options,
                                       request);
}

Status BigtableInstanceAdminMetadata::DeleteAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAppProfile(context, request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::bigtable::admin::v2::ListHotTabletsResponse>
BigtableInstanceAdminMetadata::ListHotTablets(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListHotTabletsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListHotTablets(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> BigtableInstanceAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void BigtableInstanceAdminMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void BigtableInstanceAdminMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

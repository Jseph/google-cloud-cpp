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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/v1/internal/cluster_controller_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/clusters.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterControllerMetadata::ClusterControllerMetadata(
    std::shared_ptr<ClusterControllerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::CreateClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->AsyncCreateCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::UpdateClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->AsyncUpdateCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncStopCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::StopClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->AsyncStopCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncStartCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::StartClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->AsyncStartCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::DeleteClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->AsyncDeleteCluster(cq, std::move(context), options, request);
}

StatusOr<google::cloud::dataproc::v1::Cluster>
ClusterControllerMetadata::GetCluster(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetClusterRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->GetCluster(context, request);
}

StatusOr<google::cloud::dataproc::v1::ListClustersResponse>
ClusterControllerMetadata::ListClusters(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListClustersRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "region=", internal::UrlEncode(request.region())));
  return child_->ListClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncDiagnoseCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat(
          "project_id=", internal::UrlEncode(request.project_id()), "&",
          "region=", internal::UrlEncode(request.region()), "&",
          "cluster_name=", internal::UrlEncode(request.cluster_name())));
  return child_->AsyncDiagnoseCluster(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ClusterControllerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> ClusterControllerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void ClusterControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ClusterControllerMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

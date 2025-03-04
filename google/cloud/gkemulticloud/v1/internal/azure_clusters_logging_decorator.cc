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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/azure_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AzureClustersLogging::AzureClustersLogging(
    std::shared_ptr<AzureClustersStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncCreateAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::CreateAzureClientRequest const&
                 request) {
        return child_->AsyncCreateAzureClient(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersLogging::GetAzureClient(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureClientRequest const&
                 request) { return child_->GetAzureClient(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClientsResponse>
AzureClustersLogging::ListAzureClients(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::ListAzureClientsRequest const&
                 request) {
        return child_->ListAzureClients(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncDeleteAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const&
                 request) {
        return child_->AsyncDeleteAzureClient(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncCreateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
                 request) {
        return child_->AsyncCreateAzureCluster(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncUpdateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
                 request) {
        return child_->AsyncUpdateAzureCluster(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersLogging::GetAzureCluster(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureClusterRequest const&
                 request) { return child_->GetAzureCluster(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClustersResponse>
AzureClustersLogging::ListAzureClusters(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::ListAzureClustersRequest const&
                 request) {
        return child_->ListAzureClusters(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncDeleteAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
                 request) {
        return child_->AsyncDeleteAzureCluster(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::gkemulticloud::v1::GenerateAzureClusterAgentTokenResponse>
AzureClustersLogging::GenerateAzureClusterAgentToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::
        GenerateAzureClusterAgentTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GenerateAzureClusterAgentTokenRequest const& request) {
        return child_->GenerateAzureClusterAgentToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
AzureClustersLogging::GenerateAzureAccessToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GenerateAzureAccessTokenRequest const& request) {
        return child_->GenerateAzureAccessToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncCreateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
                 request) {
        return child_->AsyncCreateAzureNodePool(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncUpdateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
                 request) {
        return child_->AsyncUpdateAzureNodePool(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersLogging::GetAzureNodePool(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const&
                 request) {
        return child_->GetAzureNodePool(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse>
AzureClustersLogging::ListAzureNodePools(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
                 request) {
        return child_->ListAzureNodePools(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncDeleteAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
                 request) {
        return child_->AsyncDeleteAzureNodePool(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureOpenIdConfig>
AzureClustersLogging::GetAzureOpenIdConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureOpenIdConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::gkemulticloud::v1::GetAzureOpenIdConfigRequest const&
              request) {
        return child_->GetAzureOpenIdConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureJsonWebKeys>
AzureClustersLogging::GetAzureJsonWebKeys(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureJsonWebKeysRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAzureJsonWebKeysRequest const&
                 request) {
        return child_->GetAzureJsonWebKeys(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersLogging::GetAzureServerConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
              request) {
        return child_->GetAzureServerConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> AzureClustersLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

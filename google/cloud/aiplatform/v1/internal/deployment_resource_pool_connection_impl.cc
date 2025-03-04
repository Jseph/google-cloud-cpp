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
// source: google/cloud/aiplatform/v1/deployment_resource_pool_service.proto

#include "google/cloud/aiplatform/v1/internal/deployment_resource_pool_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/deployment_resource_pool_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::DeploymentResourcePoolServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<aiplatform_v1::DeploymentResourcePoolServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<aiplatform_v1::DeploymentResourcePoolServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    aiplatform_v1::DeploymentResourcePoolServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::
               DeploymentResourcePoolServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<aiplatform_v1::DeploymentResourcePoolServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

DeploymentResourcePoolServiceConnectionImpl::
    DeploymentResourcePoolServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            aiplatform_v1_internal::DeploymentResourcePoolServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          DeploymentResourcePoolServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>>
DeploymentResourcePoolServiceConnectionImpl::CreateDeploymentResourcePool(
    google::cloud::aiplatform::v1::CreateDeploymentResourcePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeploymentResourcePool>(
      background_->cq(), current, request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::aiplatform::v1::
                         CreateDeploymentResourcePoolRequest const& request) {
        return stub->AsyncCreateDeploymentResourcePool(cq, std::move(context),
                                                       options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::aiplatform::v1::DeploymentResourcePool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDeploymentResourcePool(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>
DeploymentResourcePoolServiceConnectionImpl::GetDeploymentResourcePool(
    google::cloud::aiplatform::v1::GetDeploymentResourcePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDeploymentResourcePool(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetDeploymentResourcePoolRequest const&
              request) {
        return stub_->GetDeploymentResourcePool(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::DeploymentResourcePool>
DeploymentResourcePoolServiceConnectionImpl::ListDeploymentResourcePools(
    google::cloud::aiplatform::v1::ListDeploymentResourcePoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListDeploymentResourcePools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::DeploymentResourcePool>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           aiplatform_v1::DeploymentResourcePoolServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::
              ListDeploymentResourcePoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::
                       ListDeploymentResourcePoolsRequest const& request) {
              return stub->ListDeploymentResourcePools(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListDeploymentResourcePoolsResponse r) {
        std::vector<google::cloud::aiplatform::v1::DeploymentResourcePool>
            result(r.deployment_resource_pools().size());
        auto& messages = *r.mutable_deployment_resource_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DeploymentResourcePoolServiceConnectionImpl::DeleteDeploymentResourcePool(
    google::cloud::aiplatform::v1::DeleteDeploymentResourcePoolRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::aiplatform::v1::
                         DeleteDeploymentResourcePoolRequest const& request) {
        return stub->AsyncDeleteDeploymentResourcePool(cq, std::move(context),
                                                       options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDeploymentResourcePool(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

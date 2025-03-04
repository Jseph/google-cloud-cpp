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
// source:
// google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_rest_connection_impl.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalNetworkEndpointGroupsRestConnectionImpl::
    GlobalNetworkEndpointGroupsRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_global_network_endpoint_groups_v1_internal::
                            GlobalNetworkEndpointGroupsRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          GlobalNetworkEndpointGroupsConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestConnectionImpl::AttachNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              AttachNetworkEndpointsRequest const& request) {
        return stub->AsyncAttachNetworkEndpoints(cq, std::move(context),
                                                 options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AttachNetworkEndpoints(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestConnectionImpl::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              DeleteNetworkEndpointGroupRequest const& request) {
        return stub->AsyncDeleteNetworkEndpointGroup(cq, std::move(context),
                                                     options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteNetworkEndpointGroup(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestConnectionImpl::DetachNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              DetachNetworkEndpointsRequest const& request) {
        return stub->AsyncDetachNetworkEndpoints(cq, std::move(context),
                                                 options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DetachNetworkEndpoints(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
GlobalNetworkEndpointGroupsRestConnectionImpl::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNetworkEndpointGroup(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 GetNetworkEndpointGroupRequest const& request) {
        return stub_->GetNetworkEndpointGroup(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestConnectionImpl::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              InsertNetworkEndpointGroupRequest const& request) {
        return stub->AsyncInsertNetworkEndpointGroup(cq, std::move(context),
                                                     options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertNetworkEndpointGroup(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
GlobalNetworkEndpointGroupsRestConnectionImpl::ListGlobalNetworkEndpointGroups(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        ListGlobalNetworkEndpointGroupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListGlobalNetworkEndpointGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_global_network_endpoint_groups_v1::
                                   GlobalNetworkEndpointGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              ListGlobalNetworkEndpointGroupsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                Options const& options,
                google::cloud::cpp::compute::global_network_endpoint_groups::
                    v1::ListGlobalNetworkEndpointGroupsRequest const& request) {
              return stub->ListGlobalNetworkEndpointGroups(rest_context,
                                                           options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::NetworkEndpointGroupList r) {
        std::vector<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
GlobalNetworkEndpointGroupsRestConnectionImpl::ListNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        ListNetworkEndpointsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListNetworkEndpoints(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_global_network_endpoint_groups_v1::
                                   GlobalNetworkEndpointGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::global_network_endpoint_groups::v1::
              ListNetworkEndpointsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::global_network_endpoint_groups::
                       v1::ListNetworkEndpointsRequest const& request) {
              return stub->ListNetworkEndpoints(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::
             NetworkEndpointGroupsListNetworkEndpoints r) {
        std::vector<
            google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

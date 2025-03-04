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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#include "google/cloud/osconfig/agentendpoint/v1/internal/agent_endpoint_connection_impl.h"
#include "google/cloud/osconfig/agentendpoint/v1/internal/agent_endpoint_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_agentendpoint_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<osconfig_agentendpoint_v1::AgentEndpointServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<osconfig_agentendpoint_v1::AgentEndpointServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<osconfig_agentendpoint_v1::AgentEndpointServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    osconfig_agentendpoint_v1::AgentEndpointServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<osconfig_agentendpoint_v1::
               AgentEndpointServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

AgentEndpointServiceConnectionImpl::AgentEndpointServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        osconfig_agentendpoint_v1_internal::AgentEndpointServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AgentEndpointServiceConnection::options())) {}

StreamRange<
    google::cloud::osconfig::agentendpoint::v1::ReceiveTaskNotificationResponse>
AgentEndpointServiceConnectionImpl::ReceiveTaskNotification(
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto factory = [stub = stub_,
                  current](google::cloud::osconfig::agentendpoint::v1::
                               ReceiveTaskNotificationRequest const& request) {
    return stub->ReceiveTaskNotification(
        std::make_shared<grpc::ClientContext>(), *current, request);
  };
  auto resumable = internal::MakeResumableStreamingReadRpc<
      google::cloud::osconfig::agentendpoint::v1::
          ReceiveTaskNotificationResponse,
      google::cloud::osconfig::agentendpoint::v1::
          ReceiveTaskNotificationRequest>(
      retry_policy(*current), backoff_policy(*current), factory,
      AgentEndpointServiceReceiveTaskNotificationStreamingUpdater, request);
  return internal::MakeStreamRange(
      internal::StreamReader<google::cloud::osconfig::agentendpoint::v1::
                                 ReceiveTaskNotificationResponse>(
          [resumable] { return resumable->Read(); }));
}
StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceConnectionImpl::StartNextTask(
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartNextTask(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 StartNextTaskRequest const& request) {
        return stub_->StartNextTask(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceConnectionImpl::ReportTaskProgress(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReportTaskProgress(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportTaskProgressRequest const& request) {
        return stub_->ReportTaskProgress(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceConnectionImpl::ReportTaskComplete(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReportTaskComplete(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportTaskCompleteRequest const& request) {
        return stub_->ReportTaskComplete(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceConnectionImpl::RegisterAgent(
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RegisterAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 RegisterAgentRequest const& request) {
        return stub_->RegisterAgent(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceConnectionImpl::ReportInventory(
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReportInventory(request),
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportInventoryRequest const& request) {
        return stub_->ReportInventory(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_agentendpoint_v1_internal
}  // namespace cloud
}  // namespace google

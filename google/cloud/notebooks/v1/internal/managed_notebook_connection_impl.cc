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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/internal/managed_notebook_connection_impl.h"
#include "google/cloud/notebooks/v1/internal/managed_notebook_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<notebooks_v1::ManagedNotebookServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<notebooks_v1::ManagedNotebookServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<notebooks_v1::ManagedNotebookServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<notebooks_v1::ManagedNotebookServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<notebooks_v1::
               ManagedNotebookServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<notebooks_v1::ManagedNotebookServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ManagedNotebookServiceConnectionImpl::ManagedNotebookServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<notebooks_v1_internal::ManagedNotebookServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ManagedNotebookServiceConnection::options())) {}

StreamRange<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnectionImpl::ListRuntimes(
    google::cloud::notebooks::v1::ListRuntimesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRuntimes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::notebooks::v1::Runtime>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<notebooks_v1::ManagedNotebookServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::notebooks::v1::ListRuntimesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::notebooks::v1::ListRuntimesRequest const&
                       request) {
              return stub->ListRuntimes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::notebooks::v1::ListRuntimesResponse r) {
        std::vector<google::cloud::notebooks::v1::Runtime> result(
            r.runtimes().size());
        auto& messages = *r.mutable_runtimes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnectionImpl::GetRuntime(
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRuntime(request),
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
        return stub_->GetRuntime(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::CreateRuntime(
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
        return stub->AsyncCreateRuntime(cq, std::move(context), options,
                                        request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::UpdateRuntime(
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
        return stub->AsyncUpdateRuntime(cq, std::move(context), options,
                                        request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
ManagedNotebookServiceConnectionImpl::DeleteRuntime(
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::OperationMetadata>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
        return stub->AsyncDeleteRuntime(cq, std::move(context), options,
                                        request);
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
          google::cloud::notebooks::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::StartRuntime(
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
        return stub->AsyncStartRuntime(cq, std::move(context), options,
                                       request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::StopRuntime(
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
        return stub->AsyncStopRuntime(cq, std::move(context), options, request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::SwitchRuntime(
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
        return stub->AsyncSwitchRuntime(cq, std::move(context), options,
                                        request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SwitchRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::ResetRuntime(
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
        return stub->AsyncResetRuntime(cq, std::move(context), options,
                                       request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResetRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::UpgradeRuntime(
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
        return stub->AsyncUpgradeRuntime(cq, std::move(context), options,
                                         request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpgradeRuntime(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::ReportRuntimeEvent(
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::ReportRuntimeEventRequest const&
              request) {
        return stub->AsyncReportRuntimeEvent(cq, std::move(context), options,
                                             request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReportRuntimeEvent(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceConnectionImpl::RefreshRuntimeTokenInternal(
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RefreshRuntimeTokenInternal(request),
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::
                 RefreshRuntimeTokenInternalRequest const& request) {
        return stub_->RefreshRuntimeTokenInternal(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnectionImpl::DiagnoseRuntime(
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::notebooks::v1::Runtime>(
      background_->cq(), current, request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
        return stub->AsyncDiagnoseRuntime(cq, std::move(context), options,
                                          request);
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
          google::cloud::notebooks::v1::Runtime>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DiagnoseRuntime(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google

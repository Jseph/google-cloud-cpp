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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#include "google/cloud/dialogflow_cx/internal/experiments_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/experiments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::ExperimentsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::ExperimentsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::ExperimentsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::ExperimentsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_cx::ExperimentsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ExperimentsConnectionImpl::ExperimentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::ExperimentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ExperimentsConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::ListExperiments(
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListExperiments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Experiment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::ExperimentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dialogflow::cx::v3::ListExperimentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::dialogflow::cx::v3::ListExperimentsRequest const&
                    request) {
              return stub->ListExperiments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListExperimentsResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Experiment> result(
            r.experiments().size());
        auto& messages = *r.mutable_experiments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::GetExperiment(
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::GetExperimentRequest const&
                 request) { return stub_->GetExperiment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::CreateExperiment(
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::CreateExperimentRequest const&
                 request) { return stub_->CreateExperiment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::UpdateExperiment(
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const&
                 request) { return stub_->UpdateExperiment(context, request); },
      request, __func__);
}

Status ExperimentsConnectionImpl::DeleteExperiment(
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const&
                 request) { return stub_->DeleteExperiment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::StartExperiment(
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::StartExperimentRequest const&
                 request) { return stub_->StartExperiment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsConnectionImpl::StopExperiment(
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopExperiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::StopExperimentRequest const&
                 request) { return stub_->StopExperiment(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

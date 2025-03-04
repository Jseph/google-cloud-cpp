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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/tensorboard_connection.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_tracing_connection.h"
#include "google/cloud/aiplatform/v1/tensorboard_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TensorboardServiceConnection::~TensorboardServiceConnection() = default;

future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>
TensorboardServiceConnection::CreateTensorboard(
    google::cloud::aiplatform::v1::CreateTensorboardRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::Tensorboard>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceConnection::GetTensorboard(
    google::cloud::aiplatform::v1::GetTensorboardRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>
TensorboardServiceConnection::UpdateTensorboard(
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::Tensorboard>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceConnection::ListTensorboards(
    google::cloud::aiplatform::v1::
        ListTensorboardsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Tensorboard>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnection::DeleteTensorboard(
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
TensorboardServiceConnection::ReadTensorboardUsage(
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
TensorboardServiceConnection::ReadTensorboardSize(
    google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnection::CreateTensorboardExperiment(
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnection::GetTensorboardExperiment(
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnection::UpdateTensorboardExperiment(
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnection::ListTensorboardExperiments(
    google::cloud::aiplatform::v1::
        ListTensorboardExperimentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardExperiment>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnection::DeleteTensorboardExperiment(
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnection::CreateTensorboardRun(
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
TensorboardServiceConnection::BatchCreateTensorboardRuns(
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnection::GetTensorboardRun(
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnection::UpdateTensorboardRun(
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnection::ListTensorboardRuns(
    google::cloud::aiplatform::v1::
        ListTensorboardRunsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardRun>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnection::DeleteTensorboardRun(
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<
    google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
TensorboardServiceConnection::BatchCreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnection::CreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnection::GetTensorboardTimeSeries(
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnection::UpdateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnection::ListTensorboardTimeSeries(
    google::cloud::aiplatform::v1::
        ListTensorboardTimeSeriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardTimeSeries>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnection::DeleteTensorboardTimeSeries(
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<
    google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
TensorboardServiceConnection::BatchReadTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        BatchReadTensorboardTimeSeriesDataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
TensorboardServiceConnection::ReadTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        ReadTensorboardTimeSeriesDataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>
TensorboardServiceConnection::ReadTensorboardBlobData(
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>(
      []() -> absl::variant<
               Status,
               google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
TensorboardServiceConnection::WriteTensorboardExperimentData(
    google::cloud::aiplatform::v1::
        WriteTensorboardExperimentDataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
TensorboardServiceConnection::WriteTensorboardRunData(
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::TimeSeriesDataPoint>
TensorboardServiceConnection::ExportTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        ExportTensorboardTimeSeriesDataRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TimeSeriesDataPoint>>();
}

std::shared_ptr<TensorboardServiceConnection> MakeTensorboardServiceConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TensorboardServicePolicyOptionList>(options,
                                                                     __func__);
  options = aiplatform_v1_internal::TensorboardServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = aiplatform_v1_internal::CreateDefaultTensorboardServiceStub(
      std::move(auth), options);
  return aiplatform_v1_internal::MakeTensorboardServiceTracingConnection(
      std::make_shared<
          aiplatform_v1_internal::TensorboardServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

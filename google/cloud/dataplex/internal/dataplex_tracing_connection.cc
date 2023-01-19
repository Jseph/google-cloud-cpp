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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/internal/dataplex_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataplexServiceTracingConnection::DataplexServiceTracingConnection(
    std::shared_ptr<dataplex::DataplexServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceTracingConnection::CreateLake(
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  return child_->CreateLake(request);
}

future<StatusOr<google::cloud::dataplex::v1::Lake>>
DataplexServiceTracingConnection::UpdateLake(
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  return child_->UpdateLake(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceTracingConnection::DeleteLake(
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  return child_->DeleteLake(request);
}

StreamRange<google::cloud::dataplex::v1::Lake>
DataplexServiceTracingConnection::ListLakes(
    google::cloud::dataplex::v1::ListLakesRequest request) {
  return child_->ListLakes(request);
}

StatusOr<google::cloud::dataplex::v1::Lake>
DataplexServiceTracingConnection::GetLake(
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::GetLake");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLake(request));
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceTracingConnection::ListLakeActions(
    google::cloud::dataplex::v1::ListLakeActionsRequest request) {
  return child_->ListLakeActions(request);
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceTracingConnection::CreateZone(
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  return child_->CreateZone(request);
}

future<StatusOr<google::cloud::dataplex::v1::Zone>>
DataplexServiceTracingConnection::UpdateZone(
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  return child_->UpdateZone(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceTracingConnection::DeleteZone(
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  return child_->DeleteZone(request);
}

StreamRange<google::cloud::dataplex::v1::Zone>
DataplexServiceTracingConnection::ListZones(
    google::cloud::dataplex::v1::ListZonesRequest request) {
  return child_->ListZones(request);
}

StatusOr<google::cloud::dataplex::v1::Zone>
DataplexServiceTracingConnection::GetZone(
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::GetZone");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetZone(request));
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceTracingConnection::ListZoneActions(
    google::cloud::dataplex::v1::ListZoneActionsRequest request) {
  return child_->ListZoneActions(request);
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceTracingConnection::CreateAsset(
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  return child_->CreateAsset(request);
}

future<StatusOr<google::cloud::dataplex::v1::Asset>>
DataplexServiceTracingConnection::UpdateAsset(
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  return child_->UpdateAsset(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceTracingConnection::DeleteAsset(
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  return child_->DeleteAsset(request);
}

StreamRange<google::cloud::dataplex::v1::Asset>
DataplexServiceTracingConnection::ListAssets(
    google::cloud::dataplex::v1::ListAssetsRequest request) {
  return child_->ListAssets(request);
}

StatusOr<google::cloud::dataplex::v1::Asset>
DataplexServiceTracingConnection::GetAsset(
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::GetAsset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAsset(request));
}

StreamRange<google::cloud::dataplex::v1::Action>
DataplexServiceTracingConnection::ListAssetActions(
    google::cloud::dataplex::v1::ListAssetActionsRequest request) {
  return child_->ListAssetActions(request);
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceTracingConnection::CreateTask(
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  return child_->CreateTask(request);
}

future<StatusOr<google::cloud::dataplex::v1::Task>>
DataplexServiceTracingConnection::UpdateTask(
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  return child_->UpdateTask(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceTracingConnection::DeleteTask(
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  return child_->DeleteTask(request);
}

StreamRange<google::cloud::dataplex::v1::Task>
DataplexServiceTracingConnection::ListTasks(
    google::cloud::dataplex::v1::ListTasksRequest request) {
  return child_->ListTasks(request);
}

StatusOr<google::cloud::dataplex::v1::Task>
DataplexServiceTracingConnection::GetTask(
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTask(request));
}

StreamRange<google::cloud::dataplex::v1::Job>
DataplexServiceTracingConnection::ListJobs(
    google::cloud::dataplex::v1::ListJobsRequest request) {
  return child_->ListJobs(request);
}

StatusOr<google::cloud::dataplex::v1::Job>
DataplexServiceTracingConnection::GetJob(
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  auto span = internal::MakeSpan("dataplex::DataplexServiceConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

Status DataplexServiceTracingConnection::CancelJob(
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::CancelJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelJob(request));
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceTracingConnection::CreateEnvironment(
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  return child_->CreateEnvironment(request);
}

future<StatusOr<google::cloud::dataplex::v1::Environment>>
DataplexServiceTracingConnection::UpdateEnvironment(
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  return child_->UpdateEnvironment(request);
}

future<StatusOr<google::cloud::dataplex::v1::OperationMetadata>>
DataplexServiceTracingConnection::DeleteEnvironment(
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  return child_->DeleteEnvironment(request);
}

StreamRange<google::cloud::dataplex::v1::Environment>
DataplexServiceTracingConnection::ListEnvironments(
    google::cloud::dataplex::v1::ListEnvironmentsRequest request) {
  return child_->ListEnvironments(request);
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceTracingConnection::GetEnvironment(
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  auto span =
      internal::MakeSpan("dataplex::DataplexServiceConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

StreamRange<google::cloud::dataplex::v1::Session>
DataplexServiceTracingConnection::ListSessions(
    google::cloud::dataplex::v1::ListSessionsRequest request) {
  return child_->ListSessions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google

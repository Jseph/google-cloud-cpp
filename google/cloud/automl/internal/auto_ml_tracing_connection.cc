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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/internal/auto_ml_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AutoMlTracingConnection::AutoMlTracingConnection(
    std::shared_ptr<automl::AutoMlConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::automl::v1::Dataset>>
AutoMlTracingConnection::CreateDataset(
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  return child_->CreateDataset(request);
}

StatusOr<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::GetDataset(
    google::cloud::automl::v1::GetDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl::AutoMlConnection::GetDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDataset(request));
}

StreamRange<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::ListDatasets(
    google::cloud::automl::v1::ListDatasetsRequest request) {
  return child_->ListDatasets(request);
}

StatusOr<google::cloud::automl::v1::Dataset>
AutoMlTracingConnection::UpdateDataset(
    google::cloud::automl::v1::UpdateDatasetRequest const& request) {
  auto span = internal::MakeSpan("automl::AutoMlConnection::UpdateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateDataset(request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteDataset(
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  return child_->DeleteDataset(request);
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ImportData(
    google::cloud::automl::v1::ImportDataRequest const& request) {
  return child_->ImportData(request);
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportData(
    google::cloud::automl::v1::ExportDataRequest const& request) {
  return child_->ExportData(request);
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlTracingConnection::GetAnnotationSpec(
    google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
  auto span = internal::MakeSpan("automl::AutoMlConnection::GetAnnotationSpec");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAnnotationSpec(request));
}

future<StatusOr<google::cloud::automl::v1::Model>>
AutoMlTracingConnection::CreateModel(
    google::cloud::automl::v1::CreateModelRequest const& request) {
  return child_->CreateModel(request);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingConnection::GetModel(
    google::cloud::automl::v1::GetModelRequest const& request) {
  auto span = internal::MakeSpan("automl::AutoMlConnection::GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetModel(request));
}

StreamRange<google::cloud::automl::v1::Model>
AutoMlTracingConnection::ListModels(
    google::cloud::automl::v1::ListModelsRequest request) {
  return child_->ListModels(request);
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeleteModel(
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  return child_->DeleteModel(request);
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingConnection::UpdateModel(
    google::cloud::automl::v1::UpdateModelRequest const& request) {
  auto span = internal::MakeSpan("automl::AutoMlConnection::UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateModel(request));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::DeployModel(
    google::cloud::automl::v1::DeployModelRequest const& request) {
  return child_->DeployModel(request);
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::UndeployModel(
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  return child_->UndeployModel(request);
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlTracingConnection::ExportModel(
    google::cloud::automl::v1::ExportModelRequest const& request) {
  return child_->ExportModel(request);
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlTracingConnection::GetModelEvaluation(
    google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
  auto span =
      internal::MakeSpan("automl::AutoMlConnection::GetModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetModelEvaluation(request));
}

StreamRange<google::cloud::automl::v1::ModelEvaluation>
AutoMlTracingConnection::ListModelEvaluations(
    google::cloud::automl::v1::ListModelEvaluationsRequest request) {
  return child_->ListModelEvaluations(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google

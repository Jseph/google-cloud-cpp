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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/internal/prediction_auth_decorator.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include <google/cloud/aiplatform/v1/prediction_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceAuth::PredictionServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<PredictionServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::PredictResponse>
PredictionServiceAuth::Predict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::PredictRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Predict(context, request);
}

StatusOr<google::api::HttpBody> PredictionServiceAuth::RawPredict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RawPredictRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RawPredict(context, request);
}

StatusOr<google::cloud::aiplatform::v1::DirectPredictResponse>
PredictionServiceAuth::DirectPredict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::DirectPredictRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DirectPredict(context, request);
}

StatusOr<google::cloud::aiplatform::v1::DirectRawPredictResponse>
PredictionServiceAuth::DirectRawPredict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::DirectRawPredictRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DirectRawPredict(context, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamingPredictRequest,
    google::cloud::aiplatform::v1::StreamingPredictResponse>>
PredictionServiceAuth::AsyncStreamingPredict(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::aiplatform::v1::StreamingPredictRequest,
      google::cloud::aiplatform::v1::StreamingPredictResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncStreamingPredict(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::StreamingPredictResponse>>
PredictionServiceAuth::ServerStreamingPredict(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::StreamingPredictRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::cloud::aiplatform::v1::StreamingPredictResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return std::make_unique<ErrorStream>(std::move(status));
  return child_->ServerStreamingPredict(std::move(context), options, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamingRawPredictRequest,
    google::cloud::aiplatform::v1::StreamingRawPredictResponse>>
PredictionServiceAuth::AsyncStreamingRawPredict(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::aiplatform::v1::StreamingRawPredictRequest,
      google::cloud::aiplatform::v1::StreamingRawPredictResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncStreamingRawPredict(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

StatusOr<google::cloud::aiplatform::v1::ExplainResponse>
PredictionServiceAuth::Explain(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ExplainRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Explain(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::aiplatform::v1::GenerateContentResponse>>
PredictionServiceAuth::StreamGenerateContent(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::GenerateContentRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::cloud::aiplatform::v1::GenerateContentResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return std::make_unique<ErrorStream>(std::move(status));
  return child_->StreamGenerateContent(std::move(context), options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

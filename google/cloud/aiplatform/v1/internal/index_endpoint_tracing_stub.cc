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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/index_endpoint_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IndexEndpointServiceTracingStub::IndexEndpointServiceTracingStub(
    std::shared_ptr<IndexEndpointServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncCreateIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "CreateIndexEndpoint");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateIndexEndpoint(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceTracingStub::GetIndexEndpoint(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "GetIndexEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIndexEndpoint(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListIndexEndpointsResponse>
IndexEndpointServiceTracingStub::ListIndexEndpoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListIndexEndpointsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "ListIndexEndpoints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListIndexEndpoints(context, request));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceTracingStub::UpdateIndexEndpoint(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "UpdateIndexEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateIndexEndpoint(context, request));
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncDeleteIndexEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "DeleteIndexEndpoint");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteIndexEndpoint(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncDeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeployIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "DeployIndex");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeployIndex(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncUndeployIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::UndeployIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "UndeployIndex");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUndeployIndex(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncMutateDeployedIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.IndexEndpointService", "MutateDeployedIndex");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncMutateDeployedIndex(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IndexEndpointServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> IndexEndpointServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<IndexEndpointServiceStub> MakeIndexEndpointServiceTracingStub(
    std::shared_ptr<IndexEndpointServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<IndexEndpointServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/aiplatform/v1/index_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/index_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IndexServiceStub {
 public:
  virtual ~IndexServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateIndexRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetIndexRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse>
  ListIndexes(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListIndexesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateIndexRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteIndexRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
  UpsertDatapoints(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::UpsertDatapointsRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
  RemoveDatapoints(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::RemoveDatapointsRequest const&
                       request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultIndexServiceStub : public IndexServiceStub {
 public:
  DefaultIndexServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::IndexService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateIndexRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetIndexRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse> ListIndexes(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListIndexesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::UpdateIndexRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteIndex(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteIndexRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
  UpsertDatapoints(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::UpsertDatapointsRequest const&
                       request) override;

  StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
  RemoveDatapoints(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::RemoveDatapointsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::aiplatform::v1::IndexService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_STUB_H

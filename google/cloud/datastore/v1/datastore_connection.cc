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
// source: google/datastore/v1/datastore.proto

#include "google/cloud/datastore/v1/datastore_connection.h"
#include "google/cloud/datastore/v1/datastore_options.h"
#include "google/cloud/datastore/v1/internal/datastore_connection_impl.h"
#include "google/cloud/datastore/v1/internal/datastore_option_defaults.h"
#include "google/cloud/datastore/v1/internal/datastore_stub_factory.h"
#include "google/cloud/datastore/v1/internal/datastore_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace datastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastoreConnection::~DatastoreConnection() = default;

StatusOr<google::datastore::v1::LookupResponse> DatastoreConnection::Lookup(
    google::datastore::v1::LookupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::RunQueryResponse> DatastoreConnection::RunQuery(
    google::datastore::v1::RunQueryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::RunAggregationQueryResponse>
DatastoreConnection::RunAggregationQuery(
    google::datastore::v1::RunAggregationQueryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::BeginTransactionResponse>
DatastoreConnection::BeginTransaction(
    google::datastore::v1::BeginTransactionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::CommitResponse> DatastoreConnection::Commit(
    google::datastore::v1::CommitRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::RollbackResponse> DatastoreConnection::Rollback(
    google::datastore::v1::RollbackRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::AllocateIdsResponse>
DatastoreConnection::AllocateIds(
    google::datastore::v1::AllocateIdsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::datastore::v1::ReserveIdsResponse>
DatastoreConnection::ReserveIds(
    google::datastore::v1::ReserveIdsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DatastoreConnection> MakeDatastoreConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DatastorePolicyOptionList>(options, __func__);
  options = datastore_v1_internal::DatastoreDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = datastore_v1_internal::CreateDefaultDatastoreStub(std::move(auth),
                                                                options);
  return datastore_v1_internal::MakeDatastoreTracingConnection(
      std::make_shared<datastore_v1_internal::DatastoreConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/dataplex/v1/metadata.proto

#include "google/cloud/dataplex/v1/metadata_connection.h"
#include "google/cloud/dataplex/v1/internal/metadata_connection_impl.h"
#include "google/cloud/dataplex/v1/internal/metadata_option_defaults.h"
#include "google/cloud/dataplex/v1/internal/metadata_stub_factory.h"
#include "google/cloud/dataplex/v1/internal/metadata_tracing_connection.h"
#include "google/cloud/dataplex/v1/metadata_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetadataServiceConnection::~MetadataServiceConnection() = default;

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceConnection::CreateEntity(
    google::cloud::dataplex::v1::CreateEntityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceConnection::UpdateEntity(
    google::cloud::dataplex::v1::UpdateEntityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status MetadataServiceConnection::DeleteEntity(
    google::cloud::dataplex::v1::DeleteEntityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceConnection::GetEntity(
    google::cloud::dataplex::v1::GetEntityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Entity>
MetadataServiceConnection::ListEntities(
    google::cloud::dataplex::v1::
        ListEntitiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Entity>>();
}

StatusOr<google::cloud::dataplex::v1::Partition>
MetadataServiceConnection::CreatePartition(
    google::cloud::dataplex::v1::CreatePartitionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status MetadataServiceConnection::DeletePartition(
    google::cloud::dataplex::v1::DeletePartitionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataplex::v1::Partition>
MetadataServiceConnection::GetPartition(
    google::cloud::dataplex::v1::GetPartitionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataplex::v1::Partition>
MetadataServiceConnection::ListPartitions(
    google::cloud::dataplex::v1::
        ListPartitionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataplex::v1::Partition>>();
}

std::shared_ptr<MetadataServiceConnection> MakeMetadataServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 MetadataServicePolicyOptionList>(options,
                                                                  __func__);
  options =
      dataplex_v1_internal::MetadataServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dataplex_v1_internal::CreateDefaultMetadataServiceStub(
      std::move(auth), options);
  return dataplex_v1_internal::MakeMetadataServiceTracingConnection(
      std::make_shared<dataplex_v1_internal::MetadataServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

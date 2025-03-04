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
// source: google/cloud/compute/region_commitments/v1/region_commitments.proto

#include "google/cloud/compute/region_commitments/v1/region_commitments_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionCommitmentsClient::RegionCommitmentsClient(
    std::shared_ptr<RegionCommitmentsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionCommitmentsClient::~RegionCommitmentsClient() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::CommitmentsScopedList>>
RegionCommitmentsClient::AggregatedListRegionCommitments(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_commitments::v1::
      AggregatedListRegionCommitmentsRequest request;
  request.set_project(project);
  return connection_->AggregatedListRegionCommitments(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::CommitmentsScopedList>>
RegionCommitmentsClient::AggregatedListRegionCommitments(
    google::cloud::cpp::compute::region_commitments::v1::
        AggregatedListRegionCommitmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListRegionCommitments(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::Commitment>
RegionCommitmentsClient::GetCommitment(std::string const& project,
                                       std::string const& region,
                                       std::string const& commitment,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_commitments::v1::GetCommitmentRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_commitment(commitment);
  return connection_->GetCommitment(request);
}

StatusOr<google::cloud::cpp::compute::v1::Commitment>
RegionCommitmentsClient::GetCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        GetCommitmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCommitment(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionCommitmentsClient::InsertCommitment(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_commitments::v1::InsertCommitmentRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_commitment_resource() = commitment_resource;
  return connection_->InsertCommitment(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionCommitmentsClient::InsertCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        InsertCommitmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertCommitment(request);
}

StreamRange<google::cloud::cpp::compute::v1::Commitment>
RegionCommitmentsClient::ListRegionCommitments(std::string const& project,
                                               std::string const& region,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_commitments::v1::
      ListRegionCommitmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionCommitments(request);
}

StreamRange<google::cloud::cpp::compute::v1::Commitment>
RegionCommitmentsClient::ListRegionCommitments(
    google::cloud::cpp::compute::region_commitments::v1::
        ListRegionCommitmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionCommitments(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionCommitmentsClient::UpdateCommitment(
    std::string const& project, std::string const& region,
    std::string const& commitment, std::string const& update_mask,
    google::cloud::cpp::compute::v1::Commitment const& commitment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_commitments::v1::UpdateCommitmentRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_commitment(commitment);
  request.set_update_mask(update_mask);
  *request.mutable_commitment_resource() = commitment_resource;
  return connection_->UpdateCommitment(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionCommitmentsClient::UpdateCommitment(
    google::cloud::cpp::compute::region_commitments::v1::
        UpdateCommitmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCommitment(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1
}  // namespace cloud
}  // namespace google

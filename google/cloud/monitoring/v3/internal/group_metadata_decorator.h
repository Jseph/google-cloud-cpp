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
// source: google/monitoring/v3/group_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_METADATA_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/group_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GroupServiceMetadata : public GroupServiceStub {
 public:
  ~GroupServiceMetadata() override = default;
  GroupServiceMetadata(std::shared_ptr<GroupServiceStub> child,
                       std::multimap<std::string, std::string> fixed_metadata,
                       std::string api_client_header = "");

  StatusOr<google::monitoring::v3::ListGroupsResponse> ListGroups(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupsRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> GetGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::GetGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> CreateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> UpdateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateGroupRequest const& request) override;

  Status DeleteGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::ListGroupMembersResponse> ListGroupMembers(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupMembersRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<GroupServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_METADATA_DECORATOR_H

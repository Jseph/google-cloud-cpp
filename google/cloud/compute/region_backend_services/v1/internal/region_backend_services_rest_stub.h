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
// source:
// google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_backend_services/v1/region_backend_services.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionBackendServicesRestStub {
 public:
  virtual ~RegionBackendServicesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          DeleteBackendServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendService>
  GetBackendService(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::region_backend_services::v1::
                        GetBackendServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::rest_internal::RestContext& rest_context,
            Options const& options,
            google::cloud::cpp::compute::region_backend_services::v1::
                GetHealthRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          GetIamPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          InsertBackendServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
  ListRegionBackendServices(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          ListRegionBackendServicesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendServiceListUsable>
  ListUsable(google::cloud::rest_internal::RestContext& rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_backend_services::v1::
                 ListUsableRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          PatchBackendServiceRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          SetIamPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          SetSecurityPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::region_backend_services::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          UpdateBackendServiceRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultRegionBackendServicesRestStub
    : public RegionBackendServicesRestStub {
 public:
  ~DefaultRegionBackendServicesRestStub() override = default;

  explicit DefaultRegionBackendServicesRestStub(Options options);
  DefaultRegionBackendServicesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          DeleteBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendService> GetBackendService(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          GetBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::rest_internal::RestContext& rest_context,
            Options const& options,
            google::cloud::cpp::compute::region_backend_services::v1::
                GetHealthRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          InsertBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
  ListRegionBackendServices(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          ListRegionBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceListUsable>
  ListUsable(google::cloud::rest_internal::RestContext& rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_backend_services::v1::
                 ListUsableRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          PatchBackendServiceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          SetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          SetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::region_backend_services::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateBackendService(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_backend_services::v1::
          UpdateBackendServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_REST_STUB_H

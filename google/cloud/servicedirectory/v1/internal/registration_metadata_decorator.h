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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_METADATA_DECORATOR_H

#include "google/cloud/servicedirectory/v1/internal/registration_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegistrationServiceMetadata : public RegistrationServiceStub {
 public:
  ~RegistrationServiceMetadata() override = default;
  RegistrationServiceMetadata(
      std::shared_ptr<RegistrationServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::servicedirectory::v1::Namespace> CreateNamespace(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
          request) override;

  StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
  ListNamespaces(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::ListNamespacesRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Namespace> GetNamespace(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::GetNamespaceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Namespace> UpdateNamespace(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
          request) override;

  Status DeleteNamespace(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
          request) override;

  StatusOr<google::cloud::servicedirectory::v1::Service> CreateService(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::CreateServiceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
  ListServices(grpc::ClientContext& context,
               google::cloud::servicedirectory::v1::ListServicesRequest const&
                   request) override;

  StatusOr<google::cloud::servicedirectory::v1::Service> GetService(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::GetServiceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Service> UpdateService(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::UpdateServiceRequest const& request)
      override;

  Status DeleteService(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::DeleteServiceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> CreateEndpoint(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::CreateEndpointRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
  ListEndpoints(grpc::ClientContext& context,
                google::cloud::servicedirectory::v1::ListEndpointsRequest const&
                    request) override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> GetEndpoint(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::GetEndpointRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> UpdateEndpoint(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request)
      override;

  Status DeleteEndpoint(
      grpc::ClientContext& context,
      google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<RegistrationServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_METADATA_DECORATOR_H

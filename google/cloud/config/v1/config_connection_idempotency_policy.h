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
// source: google/cloud/config/v1/config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/config/v1/config.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace config_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigConnectionIdempotencyPolicy {
 public:
  virtual ~ConfigConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ConfigConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListDeployments(
      google::cloud::config::v1::ListDeploymentsRequest request);

  virtual google::cloud::Idempotency GetDeployment(
      google::cloud::config::v1::GetDeploymentRequest const& request);

  virtual google::cloud::Idempotency CreateDeployment(
      google::cloud::config::v1::CreateDeploymentRequest const& request);

  virtual google::cloud::Idempotency UpdateDeployment(
      google::cloud::config::v1::UpdateDeploymentRequest const& request);

  virtual google::cloud::Idempotency DeleteDeployment(
      google::cloud::config::v1::DeleteDeploymentRequest const& request);

  virtual google::cloud::Idempotency ListRevisions(
      google::cloud::config::v1::ListRevisionsRequest request);

  virtual google::cloud::Idempotency GetRevision(
      google::cloud::config::v1::GetRevisionRequest const& request);

  virtual google::cloud::Idempotency GetResource(
      google::cloud::config::v1::GetResourceRequest const& request);

  virtual google::cloud::Idempotency ListResources(
      google::cloud::config::v1::ListResourcesRequest request);

  virtual google::cloud::Idempotency ExportDeploymentStatefile(
      google::cloud::config::v1::ExportDeploymentStatefileRequest const&
          request);

  virtual google::cloud::Idempotency ExportRevisionStatefile(
      google::cloud::config::v1::ExportRevisionStatefileRequest const& request);

  virtual google::cloud::Idempotency ImportStatefile(
      google::cloud::config::v1::ImportStatefileRequest const& request);

  virtual google::cloud::Idempotency DeleteStatefile(
      google::cloud::config::v1::DeleteStatefileRequest const& request);

  virtual google::cloud::Idempotency LockDeployment(
      google::cloud::config::v1::LockDeploymentRequest const& request);

  virtual google::cloud::Idempotency UnlockDeployment(
      google::cloud::config::v1::UnlockDeploymentRequest const& request);

  virtual google::cloud::Idempotency ExportLockInfo(
      google::cloud::config::v1::ExportLockInfoRequest const& request);
};

std::unique_ptr<ConfigConnectionIdempotencyPolicy>
MakeDefaultConfigConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIG_V1_CONFIG_CONNECTION_IDEMPOTENCY_POLICY_H

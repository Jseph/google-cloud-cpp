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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_option_defaults.h"
#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies_connection.h"
#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TargetHttpProxiesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TARGET_HTTP_PROXIES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TARGET_HTTP_PROXIES_AUTHORITY",
      "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_target_http_proxies_v1::
                       TargetHttpProxiesRetryPolicyOption>()) {
    options.set<
        compute_target_http_proxies_v1::TargetHttpProxiesRetryPolicyOption>(
        compute_target_http_proxies_v1::TargetHttpProxiesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_target_http_proxies_v1::
                       TargetHttpProxiesBackoffPolicyOption>()) {
    options.set<
        compute_target_http_proxies_v1::TargetHttpProxiesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_target_http_proxies_v1::
                       TargetHttpProxiesPollingPolicyOption>()) {
    options.set<
        compute_target_http_proxies_v1::TargetHttpProxiesPollingPolicyOption>(
        GenericPollingPolicy<compute_target_http_proxies_v1::
                                 TargetHttpProxiesRetryPolicyOption::Type,
                             compute_target_http_proxies_v1::
                                 TargetHttpProxiesBackoffPolicyOption::Type>(
            options
                .get<compute_target_http_proxies_v1::
                         TargetHttpProxiesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_target_http_proxies_v1::
                       TargetHttpProxiesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_target_http_proxies_v1::
                    TargetHttpProxiesConnectionIdempotencyPolicyOption>(
        compute_target_http_proxies_v1::
            MakeDefaultTargetHttpProxiesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google

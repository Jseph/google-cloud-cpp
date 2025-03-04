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
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/v1/internal/cloud_functions_option_defaults.h"
#include "google/cloud/functions/v1/cloud_functions_connection.h"
#include "google/cloud/functions/v1/cloud_functions_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudFunctionsServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_FUNCTIONS_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_CLOUD_FUNCTIONS_SERVICE_AUTHORITY",
      "cloudfunctions.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<functions_v1::CloudFunctionsServiceRetryPolicyOption>()) {
    options.set<functions_v1::CloudFunctionsServiceRetryPolicyOption>(
        functions_v1::CloudFunctionsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<functions_v1::CloudFunctionsServiceBackoffPolicyOption>()) {
    options.set<functions_v1::CloudFunctionsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<functions_v1::CloudFunctionsServicePollingPolicyOption>()) {
    options.set<functions_v1::CloudFunctionsServicePollingPolicyOption>(
        GenericPollingPolicy<
            functions_v1::CloudFunctionsServiceRetryPolicyOption::Type,
            functions_v1::CloudFunctionsServiceBackoffPolicyOption::Type>(
            options.get<functions_v1::CloudFunctionsServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<functions_v1::
                    CloudFunctionsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        functions_v1::CloudFunctionsServiceConnectionIdempotencyPolicyOption>(
        functions_v1::
            MakeDefaultCloudFunctionsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google

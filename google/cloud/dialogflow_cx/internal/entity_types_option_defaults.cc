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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#include "google/cloud/dialogflow_cx/internal/entity_types_option_defaults.h"
#include "google/cloud/dialogflow_cx/entity_types_connection.h"
#include "google/cloud/dialogflow_cx/entity_types_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options EntityTypesDefaultOptions(std::string const& location,
                                  Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ENTITY_TYPES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_ENTITY_TYPES_AUTHORITY",
      absl::StrCat(location, location.empty() ? "" : "-",
                   "dialogflow.googleapis.com"));
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<dialogflow_cx::EntityTypesRetryPolicyOption>()) {
    options.set<dialogflow_cx::EntityTypesRetryPolicyOption>(
        dialogflow_cx::EntityTypesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dialogflow_cx::EntityTypesBackoffPolicyOption>()) {
    options.set<dialogflow_cx::EntityTypesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          dialogflow_cx::EntityTypesConnectionIdempotencyPolicyOption>()) {
    options.set<dialogflow_cx::EntityTypesConnectionIdempotencyPolicyOption>(
        dialogflow_cx::MakeDefaultEntityTypesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

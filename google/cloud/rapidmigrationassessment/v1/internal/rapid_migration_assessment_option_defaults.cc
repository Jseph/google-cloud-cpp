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
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_option_defaults.h"
#include "google/cloud/rapidmigrationassessment/v1/rapid_migration_assessment_connection.h"
#include "google/cloud/rapidmigrationassessment/v1/rapid_migration_assessment_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options RapidMigrationAssessmentDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_RAPID_MIGRATION_ASSESSMENT_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_RAPID_MIGRATION_ASSESSMENT_AUTHORITY",
      "rapidmigrationassessment.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<rapidmigrationassessment_v1::
                       RapidMigrationAssessmentRetryPolicyOption>()) {
    options.set<
        rapidmigrationassessment_v1::RapidMigrationAssessmentRetryPolicyOption>(
        rapidmigrationassessment_v1::
            RapidMigrationAssessmentLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options.has<rapidmigrationassessment_v1::
                       RapidMigrationAssessmentBackoffPolicyOption>()) {
    options.set<rapidmigrationassessment_v1::
                    RapidMigrationAssessmentBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<rapidmigrationassessment_v1::
                       RapidMigrationAssessmentPollingPolicyOption>()) {
    options.set<rapidmigrationassessment_v1::
                    RapidMigrationAssessmentPollingPolicyOption>(
        GenericPollingPolicy<
            rapidmigrationassessment_v1::
                RapidMigrationAssessmentRetryPolicyOption::Type,
            rapidmigrationassessment_v1::
                RapidMigrationAssessmentBackoffPolicyOption::Type>(
            options
                .get<rapidmigrationassessment_v1::
                         RapidMigrationAssessmentRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          rapidmigrationassessment_v1::
              RapidMigrationAssessmentConnectionIdempotencyPolicyOption>()) {
    options.set<rapidmigrationassessment_v1::
                    RapidMigrationAssessmentConnectionIdempotencyPolicyOption>(
        rapidmigrationassessment_v1::
            MakeDefaultRapidMigrationAssessmentConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google

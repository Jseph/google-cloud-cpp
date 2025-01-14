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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_connection_impl.h"
#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<datacatalog_v1::PolicyTagManagerSerializationRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<datacatalog_v1::PolicyTagManagerSerializationRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<datacatalog_v1::PolicyTagManagerSerializationBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    datacatalog_v1::PolicyTagManagerSerializationConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<datacatalog_v1::
               PolicyTagManagerSerializationConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

PolicyTagManagerSerializationConnectionImpl::
    PolicyTagManagerSerializationConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            datacatalog_v1_internal::PolicyTagManagerSerializationStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          PolicyTagManagerSerializationConnection::options())) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationConnectionImpl::ReplaceTaxonomy(
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReplaceTaxonomy(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const&
                 request) { return stub_->ReplaceTaxonomy(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationConnectionImpl::ImportTaxonomies(
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportTaxonomies(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ImportTaxonomiesRequest const&
                 request) { return stub_->ImportTaxonomies(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationConnectionImpl::ExportTaxonomies(
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportTaxonomies(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ExportTaxonomiesRequest const&
                 request) { return stub_->ExportTaxonomies(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

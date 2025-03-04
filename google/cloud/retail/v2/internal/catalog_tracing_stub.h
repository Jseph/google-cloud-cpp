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
// source: google/cloud/retail/v2/catalog_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CATALOG_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CATALOG_TRACING_STUB_H

#include "google/cloud/retail/v2/internal/catalog_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CatalogServiceTracingStub : public CatalogServiceStub {
 public:
  ~CatalogServiceTracingStub() override = default;

  explicit CatalogServiceTracingStub(std::shared_ptr<CatalogServiceStub> child);

  StatusOr<google::cloud::retail::v2::ListCatalogsResponse> ListCatalogs(
      grpc::ClientContext& context,
      google::cloud::retail::v2::ListCatalogsRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Catalog> UpdateCatalog(
      grpc::ClientContext& context,
      google::cloud::retail::v2::UpdateCatalogRequest const& request) override;

  Status SetDefaultBranch(
      grpc::ClientContext& context,
      google::cloud::retail::v2::SetDefaultBranchRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
  GetDefaultBranch(grpc::ClientContext& context,
                   google::cloud::retail::v2::GetDefaultBranchRequest const&
                       request) override;

  StatusOr<google::cloud::retail::v2::CompletionConfig> GetCompletionConfig(
      grpc::ClientContext& context,
      google::cloud::retail::v2::GetCompletionConfigRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::CompletionConfig> UpdateCompletionConfig(
      grpc::ClientContext& context,
      google::cloud::retail::v2::UpdateCompletionConfigRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::AttributesConfig> GetAttributesConfig(
      grpc::ClientContext& context,
      google::cloud::retail::v2::GetAttributesConfigRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::AttributesConfig> UpdateAttributesConfig(
      grpc::ClientContext& context,
      google::cloud::retail::v2::UpdateAttributesConfigRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::AttributesConfig> AddCatalogAttribute(
      grpc::ClientContext& context,
      google::cloud::retail::v2::AddCatalogAttributeRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::AttributesConfig> RemoveCatalogAttribute(
      grpc::ClientContext& context,
      google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request)
      override;

  StatusOr<google::cloud::retail::v2::AttributesConfig> ReplaceCatalogAttribute(
      grpc::ClientContext& context,
      google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request)
      override;

 private:
  std::shared_ptr<CatalogServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<CatalogServiceStub> MakeCatalogServiceTracingStub(
    std::shared_ptr<CatalogServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CATALOG_TRACING_STUB_H

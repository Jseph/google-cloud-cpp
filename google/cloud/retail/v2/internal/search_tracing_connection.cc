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
// source: google/cloud/retail/v2/search_service.proto

#include "google/cloud/retail/v2/internal/search_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SearchServiceTracingConnection::SearchServiceTracingConnection(
    std::shared_ptr<retail_v2::SearchServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::retail::v2::SearchResponse::SearchResult>
SearchServiceTracingConnection::Search(
    google::cloud::retail::v2::SearchRequest request) {
  auto span = internal::MakeSpan("retail_v2::SearchServiceConnection::Search");
  internal::OTelScope scope(span);
  auto sr = child_->Search(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::retail::v2::SearchResponse::SearchResult>(std::move(span),
                                                               std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<retail_v2::SearchServiceConnection>
MakeSearchServiceTracingConnection(
    std::shared_ptr<retail_v2::SearchServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SearchServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

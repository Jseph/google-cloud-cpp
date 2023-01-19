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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/internal/topic_stats_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TopicStatsServiceTracingConnection::TopicStatsServiceTracingConnection(
    std::shared_ptr<pubsublite::TopicStatsServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
TopicStatsServiceTracingConnection::ComputeMessageStats(
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::TopicStatsServiceConnection::ComputeMessageStats");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ComputeMessageStats(request));
}

StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
TopicStatsServiceTracingConnection::ComputeHeadCursor(
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::TopicStatsServiceConnection::ComputeHeadCursor");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ComputeHeadCursor(request));
}

StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
TopicStatsServiceTracingConnection::ComputeTimeCursor(
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::TopicStatsServiceConnection::ComputeTimeCursor");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ComputeTimeCursor(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

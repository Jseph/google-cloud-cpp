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
// source: google/logging/v2/logging_metrics.proto

#include "google/cloud/logging/v2/metrics_service_v2_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricsServiceV2Client::MetricsServiceV2Client(
    std::shared_ptr<MetricsServiceV2Connection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
MetricsServiceV2Client::~MetricsServiceV2Client() = default;

StreamRange<google::logging::v2::LogMetric>
MetricsServiceV2Client::ListLogMetrics(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::ListLogMetricsRequest request;
  request.set_parent(parent);
  return connection_->ListLogMetrics(request);
}

StreamRange<google::logging::v2::LogMetric>
MetricsServiceV2Client::ListLogMetrics(
    google::logging::v2::ListLogMetricsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLogMetrics(std::move(request));
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Client::GetLogMetric(
    std::string const& metric_name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::GetLogMetricRequest request;
  request.set_metric_name(metric_name);
  return connection_->GetLogMetric(request);
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Client::GetLogMetric(
    google::logging::v2::GetLogMetricRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLogMetric(request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Client::CreateLogMetric(
    std::string const& parent, google::logging::v2::LogMetric const& metric,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::CreateLogMetricRequest request;
  request.set_parent(parent);
  *request.mutable_metric() = metric;
  return connection_->CreateLogMetric(request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Client::CreateLogMetric(
    google::logging::v2::CreateLogMetricRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateLogMetric(request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Client::UpdateLogMetric(
    std::string const& metric_name,
    google::logging::v2::LogMetric const& metric, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::UpdateLogMetricRequest request;
  request.set_metric_name(metric_name);
  *request.mutable_metric() = metric;
  return connection_->UpdateLogMetric(request);
}

StatusOr<google::logging::v2::LogMetric>
MetricsServiceV2Client::UpdateLogMetric(
    google::logging::v2::UpdateLogMetricRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateLogMetric(request);
}

Status MetricsServiceV2Client::DeleteLogMetric(std::string const& metric_name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::DeleteLogMetricRequest request;
  request.set_metric_name(metric_name);
  return connection_->DeleteLogMetric(request);
}

Status MetricsServiceV2Client::DeleteLogMetric(
    google::logging::v2::DeleteLogMetricRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteLogMetric(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/support/v2/attachment_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_ATTACHMENT_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_ATTACHMENT_TRACING_CONNECTION_H

#include "google/cloud/support/v2/case_attachment_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CaseAttachmentServiceTracingConnection
    : public support_v2::CaseAttachmentServiceConnection {
 public:
  ~CaseAttachmentServiceTracingConnection() override = default;

  explicit CaseAttachmentServiceTracingConnection(
      std::shared_ptr<support_v2::CaseAttachmentServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::support::v2::Attachment> ListAttachments(
      google::cloud::support::v2::ListAttachmentsRequest request) override;

 private:
  std::shared_ptr<support_v2::CaseAttachmentServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<support_v2::CaseAttachmentServiceConnection>
MakeCaseAttachmentServiceTracingConnection(
    std::shared_ptr<support_v2::CaseAttachmentServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_ATTACHMENT_TRACING_CONNECTION_H

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
// source: google/cloud/webrisk/v1/webrisk.proto

#include "google/cloud/webrisk/v1/internal/web_risk_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/webrisk/v1/webrisk.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace webrisk_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebRiskServiceLogging::WebRiskServiceLogging(
    std::shared_ptr<WebRiskServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
WebRiskServiceLogging::ComputeThreatListDiff(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::webrisk::v1::ComputeThreatListDiffRequest const&
                 request) {
        return child_->ComputeThreatListDiff(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::webrisk::v1::SearchUrisResponse>
WebRiskServiceLogging::SearchUris(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::SearchUrisRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::webrisk::v1::SearchUrisRequest const& request) {
        return child_->SearchUris(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>
WebRiskServiceLogging::SearchHashes(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::SearchHashesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::webrisk::v1::SearchHashesRequest const& request) {
        return child_->SearchHashes(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::webrisk::v1::Submission>
WebRiskServiceLogging::CreateSubmission(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::CreateSubmissionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::webrisk::v1::CreateSubmissionRequest const& request) {
        return child_->CreateSubmission(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WebRiskServiceLogging::AsyncSubmitUri(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::webrisk::v1::SubmitUriRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::webrisk::v1::SubmitUriRequest const& request) {
        return child_->AsyncSubmitUri(cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WebRiskServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> WebRiskServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_internal
}  // namespace cloud
}  // namespace google

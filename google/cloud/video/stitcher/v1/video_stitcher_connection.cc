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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/video_stitcher_connection.h"
#include "google/cloud/video/stitcher/v1/internal/video_stitcher_connection_impl.h"
#include "google/cloud/video/stitcher/v1/internal/video_stitcher_option_defaults.h"
#include "google/cloud/video/stitcher/v1/internal/video_stitcher_stub_factory.h"
#include "google/cloud/video/stitcher/v1/internal/video_stitcher_tracing_connection.h"
#include "google/cloud/video/stitcher/v1/video_stitcher_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_stitcher_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceConnection::~VideoStitcherServiceConnection() = default;

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceConnection::CreateCdnKey(
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::CdnKey>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceConnection::ListCdnKeys(
    google::cloud::video::stitcher::v1::
        ListCdnKeysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::CdnKey>>();
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceConnection::GetCdnKey(
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnection::DeleteCdnKey(
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceConnection::UpdateCdnKey(
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::CdnKey>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceConnection::CreateVodSession(
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceConnection::GetVodSession(
    google::cloud::video::stitcher::v1::GetVodSessionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceConnection::ListVodStitchDetails(
    google::cloud::video::stitcher::v1::
        ListVodStitchDetailsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>>();
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceConnection::GetVodStitchDetail(
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceConnection::ListVodAdTagDetails(
    google::cloud::video::stitcher::v1::
        ListVodAdTagDetailsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>>();
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceConnection::GetVodAdTagDetail(
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceConnection::ListLiveAdTagDetails(
    google::cloud::video::stitcher::v1::
        ListLiveAdTagDetailsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>>();
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceConnection::GetLiveAdTagDetail(
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceConnection::CreateSlate(
    google::cloud::video::stitcher::v1::CreateSlateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::Slate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceConnection::ListSlates(
    google::cloud::video::stitcher::v1::
        ListSlatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::Slate>>();
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceConnection::GetSlate(
    google::cloud::video::stitcher::v1::GetSlateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceConnection::UpdateSlate(
    google::cloud::video::stitcher::v1::UpdateSlateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::Slate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnection::DeleteSlate(
    google::cloud::video::stitcher::v1::DeleteSlateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceConnection::CreateLiveSession(
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceConnection::GetLiveSession(
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
VideoStitcherServiceConnection::CreateLiveConfig(
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceConnection::ListLiveConfigs(
    google::cloud::video::stitcher::v1::
        ListLiveConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::LiveConfig>>();
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceConnection::GetLiveConfig(
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnection::DeleteLiveConfig(
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VideoStitcherServiceConnection>
MakeVideoStitcherServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VideoStitcherServicePolicyOptionList>(
      options, __func__);
  options = video_stitcher_v1_internal::VideoStitcherServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = video_stitcher_v1_internal::CreateDefaultVideoStitcherServiceStub(
      std::move(auth), options);
  return video_stitcher_v1_internal::MakeVideoStitcherServiceTracingConnection(
      std::make_shared<
          video_stitcher_v1_internal::VideoStitcherServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1
}  // namespace cloud
}  // namespace google

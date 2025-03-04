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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/image_annotator_connection.h"
#include "google/cloud/vision/v1/image_annotator_options.h"
#include "google/cloud/vision/v1/internal/image_annotator_connection_impl.h"
#include "google/cloud/vision/v1/internal/image_annotator_option_defaults.h"
#include "google/cloud/vision/v1/internal/image_annotator_stub_factory.h"
#include "google/cloud/vision/v1/internal/image_annotator_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageAnnotatorConnection::~ImageAnnotatorConnection() = default;

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorConnection::BatchAnnotateImages(
    google::cloud::vision::v1::BatchAnnotateImagesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorConnection::BatchAnnotateFiles(
    google::cloud::vision::v1::BatchAnnotateFilesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
ImageAnnotatorConnection::AsyncBatchAnnotateImages(
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
ImageAnnotatorConnection::AsyncBatchAnnotateFiles(
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ImageAnnotatorConnection> MakeImageAnnotatorConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ImageAnnotatorPolicyOptionList>(options,
                                                                 __func__);
  options =
      vision_v1_internal::ImageAnnotatorDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = vision_v1_internal::CreateDefaultImageAnnotatorStub(
      std::move(auth), options);
  return vision_v1_internal::MakeImageAnnotatorTracingConnection(
      std::make_shared<vision_v1_internal::ImageAnnotatorConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1
}  // namespace cloud
}  // namespace google

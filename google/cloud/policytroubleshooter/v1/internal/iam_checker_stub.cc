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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#include "google/cloud/policytroubleshooter/v1/internal/iam_checker_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/policytroubleshooter/v1/checker.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IamCheckerStub::~IamCheckerStub() = default;

StatusOr<google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
DefaultIamCheckerStub::TroubleshootIamPolicy(
    grpc::ClientContext& context,
    google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyRequest const&
        request) {
  google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse
      response;
  auto status = grpc_stub_->TroubleshootIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_v1_internal
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/dialogflow/cx/v3/changelog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_CHANGELOGS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_CHANGELOGS_METADATA_DECORATOR_H

#include "google/cloud/dialogflow_cx/internal/changelogs_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ChangelogsMetadata : public ChangelogsStub {
 public:
  ~ChangelogsMetadata() override = default;
  ChangelogsMetadata(std::shared_ptr<ChangelogsStub> child,
                     std::multimap<std::string, std::string> fixed_metadata,
                     std::string api_client_header = "");

  StatusOr<google::cloud::dialogflow::cx::v3::ListChangelogsResponse>
  ListChangelogs(grpc::ClientContext& context,
                 google::cloud::dialogflow::cx::v3::ListChangelogsRequest const&
                     request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Changelog> GetChangelog(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetChangelogRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ChangelogsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_CHANGELOGS_METADATA_DECORATOR_H

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
// source: google/cloud/run/v2/task.proto

#include "google/cloud/run/v2/tasks_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TasksClient::TasksClient(std::shared_ptr<TasksConnection> connection,
                         Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TasksClient::~TasksClient() = default;

StatusOr<google::cloud::run::v2::Task> TasksClient::GetTask(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::GetTaskRequest request;
  request.set_name(name);
  return connection_->GetTask(request);
}

StatusOr<google::cloud::run::v2::Task> TasksClient::GetTask(
    google::cloud::run::v2::GetTaskRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTask(request);
}

StreamRange<google::cloud::run::v2::Task> TasksClient::ListTasks(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::ListTasksRequest request;
  request.set_parent(parent);
  return connection_->ListTasks(request);
}

StreamRange<google::cloud::run::v2::Task> TasksClient::ListTasks(
    google::cloud::run::v2::ListTasksRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTasks(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_TASKS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_TASKS_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/run/v2/task.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TasksStub {
 public:
  virtual ~TasksStub() = 0;

  virtual StatusOr<google::cloud::run::v2::Task> GetTask(
      grpc::ClientContext& context,
      google::cloud::run::v2::GetTaskRequest const& request) = 0;

  virtual StatusOr<google::cloud::run::v2::ListTasksResponse> ListTasks(
      grpc::ClientContext& context,
      google::cloud::run::v2::ListTasksRequest const& request) = 0;
};

class DefaultTasksStub : public TasksStub {
 public:
  explicit DefaultTasksStub(
      std::unique_ptr<google::cloud::run::v2::Tasks::StubInterface> grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::run::v2::Task> GetTask(
      grpc::ClientContext& context,
      google::cloud::run::v2::GetTaskRequest const& request) override;

  StatusOr<google::cloud::run::v2::ListTasksResponse> ListTasks(
      grpc::ClientContext& context,
      google::cloud::run::v2::ListTasksRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::run::v2::Tasks::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_TASKS_STUB_H

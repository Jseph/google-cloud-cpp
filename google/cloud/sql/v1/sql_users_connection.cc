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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/sql_users_connection.h"
#include "google/cloud/sql/v1/internal/sql_users_option_defaults.h"
#include "google/cloud/sql/v1/internal/sql_users_tracing_connection.h"
#include "google/cloud/sql/v1/sql_users_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlUsersServiceConnection::~SqlUsersServiceConnection() = default;

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceConnection::Delete(
    google::cloud::sql::v1::SqlUsersDeleteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::User> SqlUsersServiceConnection::Get(
    google::cloud::sql::v1::SqlUsersGetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceConnection::Insert(
    google::cloud::sql::v1::SqlUsersInsertRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::UsersListResponse>
SqlUsersServiceConnection::List(
    google::cloud::sql::v1::SqlUsersListRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceConnection::Update(
    google::cloud::sql::v1::SqlUsersUpdateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

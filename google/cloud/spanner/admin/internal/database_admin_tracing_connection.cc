// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatabaseAdminTracingConnection::DatabaseAdminTracingConnection(
    std::shared_ptr<spanner_admin::DatabaseAdminConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::spanner::admin::database::v1::Database>
DatabaseAdminTracingConnection::ListDatabases(
    google::spanner::admin::database::v1::ListDatabasesRequest request) {
  return child_->ListDatabases(request);
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminTracingConnection::CreateDatabase(
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  return child_->CreateDatabase(request);
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminTracingConnection::GetDatabase(
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::GetDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDatabase(request));
}

future<
    StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
DatabaseAdminTracingConnection::UpdateDatabaseDdl(
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  return child_->UpdateDatabaseDdl(request);
}

Status DatabaseAdminTracingConnection::DropDatabase(
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::DropDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DropDatabase(request));
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminTracingConnection::GetDatabaseDdl(
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::GetDatabaseDdl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDatabaseDdl(request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminTracingConnection::CreateBackup(
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  return child_->CreateBackup(request);
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminTracingConnection::CopyBackup(
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  return child_->CopyBackup(request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::GetBackup(
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackup(request));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::UpdateBackup(
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBackup(request));
}

Status DatabaseAdminTracingConnection::DeleteBackup(
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBackup(request));
}

StreamRange<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::ListBackups(
    google::spanner::admin::database::v1::ListBackupsRequest request) {
  return child_->ListBackups(request);
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminTracingConnection::RestoreDatabase(
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  return child_->RestoreDatabase(request);
}

StreamRange<google::longrunning::Operation>
DatabaseAdminTracingConnection::ListDatabaseOperations(
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest
        request) {
  return child_->ListDatabaseOperations(request);
}

StreamRange<google::longrunning::Operation>
DatabaseAdminTracingConnection::ListBackupOperations(
    google::spanner::admin::database::v1::ListBackupOperationsRequest request) {
  return child_->ListBackupOperations(request);
}

StreamRange<google::spanner::admin::database::v1::DatabaseRole>
DatabaseAdminTracingConnection::ListDatabaseRoles(
    google::spanner::admin::database::v1::ListDatabaseRolesRequest request) {
  return child_->ListDatabaseRoles(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

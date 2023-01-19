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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/internal/reservation_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReservationServiceTracingConnection::ReservationServiceTracingConnection(
    std::shared_ptr<bigquery::ReservationServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingConnection::CreateReservation(
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::CreateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateReservation(request));
}

StreamRange<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingConnection::ListReservations(
    google::cloud::bigquery::reservation::v1::ListReservationsRequest request) {
  return child_->ListReservations(request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingConnection::GetReservation(
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReservation(request));
}

Status ReservationServiceTracingConnection::DeleteReservation(
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::DeleteReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteReservation(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingConnection::UpdateReservation(
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::UpdateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateReservation(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingConnection::CreateCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::CreateCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCapacityCommitment(request));
}

StreamRange<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingConnection::ListCapacityCommitments(
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsRequest
        request) {
  return child_->ListCapacityCommitments(request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingConnection::GetCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::GetCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCapacityCommitment(request));
}

Status ReservationServiceTracingConnection::DeleteCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::DeleteCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteCapacityCommitment(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingConnection::UpdateCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::UpdateCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCapacityCommitment(request));
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
ReservationServiceTracingConnection::SplitCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::SplitCapacityCommitment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SplitCapacityCommitment(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingConnection::MergeCapacityCommitments(
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::MergeCapacityCommitments");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MergeCapacityCommitments(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::CreateAssignment(
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::CreateAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateAssignment(request));
}

StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::ListAssignments(
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest request) {
  return child_->ListAssignments(request);
}

Status ReservationServiceTracingConnection::DeleteAssignment(
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::DeleteAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAssignment(request));
}

StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::SearchAssignments(
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest
        request) {
  return child_->SearchAssignments(request);
}

StreamRange<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::SearchAllAssignments(
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest
        request) {
  return child_->SearchAllAssignments(request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::MoveAssignment(
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::MoveAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MoveAssignment(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingConnection::UpdateAssignment(
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::UpdateAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateAssignment(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingConnection::GetBiReservation(
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::GetBiReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBiReservation(request));
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingConnection::UpdateBiReservation(
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigquery::ReservationServiceConnection::UpdateBiReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBiReservation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AdminServiceTracingConnection::AdminServiceTracingConnection(
    std::shared_ptr<pubsublite::AdminServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingConnection::CreateTopic(
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTopic(request));
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingConnection::GetTopic(
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTopic(request));
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceTracingConnection::GetTopicPartitions(
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::GetTopicPartitions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTopicPartitions(request));
}

StreamRange<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingConnection::ListTopics(
    google::cloud::pubsublite::v1::ListTopicsRequest request) {
  return child_->ListTopics(request);
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingConnection::UpdateTopic(
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTopic(request));
}

Status AdminServiceTracingConnection::DeleteTopic(
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTopic(request));
}

StreamRange<std::string> AdminServiceTracingConnection::ListTopicSubscriptions(
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest request) {
  return child_->ListTopicSubscriptions(request);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingConnection::CreateSubscription(
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::CreateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSubscription(request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingConnection::GetSubscription(
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::GetSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSubscription(request));
}

StreamRange<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingConnection::ListSubscriptions(
    google::cloud::pubsublite::v1::ListSubscriptionsRequest request) {
  return child_->ListSubscriptions(request);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingConnection::UpdateSubscription(
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::UpdateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSubscription(request));
}

Status AdminServiceTracingConnection::DeleteSubscription(
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::DeleteSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSubscription(request));
}

future<StatusOr<google::cloud::pubsublite::v1::SeekSubscriptionResponse>>
AdminServiceTracingConnection::SeekSubscription(
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  return child_->SeekSubscription(request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingConnection::CreateReservation(
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::CreateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateReservation(request));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingConnection::GetReservation(
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  auto span =
      internal::MakeSpan("pubsublite::AdminServiceConnection::GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReservation(request));
}

StreamRange<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingConnection::ListReservations(
    google::cloud::pubsublite::v1::ListReservationsRequest request) {
  return child_->ListReservations(request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingConnection::UpdateReservation(
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::UpdateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateReservation(request));
}

Status AdminServiceTracingConnection::DeleteReservation(
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  auto span = internal::MakeSpan(
      "pubsublite::AdminServiceConnection::DeleteReservation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteReservation(request));
}

StreamRange<std::string> AdminServiceTracingConnection::ListReservationTopics(
    google::cloud::pubsublite::v1::ListReservationTopicsRequest request) {
  return child_->ListReservationTopics(request);
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
AdminServiceTracingConnection::AsyncGetTopicPartitions(
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  return child_->AsyncGetTopicPartitions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

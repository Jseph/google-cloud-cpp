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
// source: google/cloud/apigeeconnect/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_CONNECTION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_CONNECTION_CLIENT_H

#include "google/cloud/apigeeconnect/v1/connection_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service Interface for the Apigee Connect connection management APIs.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ConnectionServiceClient {
 public:
  explicit ConnectionServiceClient(
      std::shared_ptr<ConnectionServiceConnection> connection,
      Options opts = {});
  ~ConnectionServiceClient();

  ///@{
  /// @name Copy and move support
  ConnectionServiceClient(ConnectionServiceClient const&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient const&) = default;
  ConnectionServiceClient(ConnectionServiceClient&&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists connections that are currently active for the given Apigee Connect
  /// endpoint.
  ///
  /// @param parent  Required. Parent name of the form:
  ///      `projects/{project_number or project_id}/endpoints/{endpoint}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.apigeeconnect.v1.Connection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.apigeeconnect.v1.Connection]: @googleapis_reference_link{google/cloud/apigeeconnect/v1/connection.proto#L86}
  /// [google.cloud.apigeeconnect.v1.ListConnectionsRequest]: @googleapis_reference_link{google/cloud/apigeeconnect/v1/connection.proto#L52}
  ///
  // clang-format on
  StreamRange<google::cloud::apigeeconnect::v1::Connection> ListConnections(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists connections that are currently active for the given Apigee Connect
  /// endpoint.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.apigeeconnect.v1.ListConnectionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.apigeeconnect.v1.Connection], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.apigeeconnect.v1.Connection]: @googleapis_reference_link{google/cloud/apigeeconnect/v1/connection.proto#L86}
  /// [google.cloud.apigeeconnect.v1.ListConnectionsRequest]: @googleapis_reference_link{google/cloud/apigeeconnect/v1/connection.proto#L52}
  ///
  // clang-format on
  StreamRange<google::cloud::apigeeconnect::v1::Connection> ListConnections(
      google::cloud::apigeeconnect::v1::ListConnectionsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<ConnectionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_CONNECTION_CLIENT_H

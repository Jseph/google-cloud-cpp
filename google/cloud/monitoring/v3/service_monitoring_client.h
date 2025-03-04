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
// source: google/monitoring/v3/service_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CLIENT_H

#include "google/cloud/monitoring/v3/service_monitoring_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The Cloud Monitoring Service-Oriented Monitoring API has endpoints for
/// managing and querying aspects of a workspace's services. These include the
/// `Service`'s monitored resources, its Service-Level Objectives, and a
/// taxonomy of categorized Health Metrics.
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
class ServiceMonitoringServiceClient {
 public:
  explicit ServiceMonitoringServiceClient(
      std::shared_ptr<ServiceMonitoringServiceConnection> connection,
      Options opts = {});
  ~ServiceMonitoringServiceClient();

  ///@{
  /// @name Copy and move support
  ServiceMonitoringServiceClient(ServiceMonitoringServiceClient const&) =
      default;
  ServiceMonitoringServiceClient& operator=(
      ServiceMonitoringServiceClient const&) = default;
  ServiceMonitoringServiceClient(ServiceMonitoringServiceClient&&) = default;
  ServiceMonitoringServiceClient& operator=(ServiceMonitoringServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ServiceMonitoringServiceClient const& a,
                         ServiceMonitoringServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ServiceMonitoringServiceClient const& a,
                         ServiceMonitoringServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Create a `Service`.
  ///
  /// @param parent  Required. Resource [name](https://cloud.google.com/monitoring/api/v3#project_name) of
  ///  the parent workspace. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]
  /// @param service  Required. The `Service` to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L132}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> CreateService(
      std::string const& parent, google::monitoring::v3::Service const& service,
      Options opts = {});

  // clang-format off
  ///
  /// Create a `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.CreateServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L132}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> CreateService(
      google::monitoring::v3::CreateServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Get the named `Service`.
  ///
  /// @param name  Required. Resource name of the `Service`. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L153}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> GetService(std::string const& name,
                                                       Options opts = {});

  // clang-format off
  ///
  /// Get the named `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.GetServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L153}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> GetService(
      google::monitoring::v3::GetServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List `Service`s for this workspace.
  ///
  /// @param parent  Required. Resource name of the parent containing the listed services, either a
  ///  [project](https://cloud.google.com/monitoring/api/v3#project_name) or a
  ///  Monitoring Workspace. The formats are:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]
  ///      workspaces/[HOST_PROJECT_ID_OR_NUMBER]
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
  ///     [google.monitoring.v3.Service], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListServicesRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L166}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::Service> ListServices(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// List `Service`s for this workspace.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.ListServicesRequest].
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
  ///     [google.monitoring.v3.Service], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListServicesRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L166}
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::Service> ListServices(
      google::monitoring::v3::ListServicesRequest request, Options opts = {});

  // clang-format off
  ///
  /// Update this `Service`.
  ///
  /// @param service  Required. The `Service` to draw updates from.
  ///  The given `name` specifies the resource to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  /// [google.monitoring.v3.UpdateServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L223}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> UpdateService(
      google::monitoring::v3::Service const& service, Options opts = {});

  // clang-format off
  ///
  /// Update this `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.UpdateServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.Service]: @googleapis_reference_link{google/monitoring/v3/service.proto#L36}
  /// [google.monitoring.v3.UpdateServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L223}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::Service> UpdateService(
      google::monitoring::v3::UpdateServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Soft delete this `Service`.
  ///
  /// @param name  Required. Resource name of the `Service` to delete. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.DeleteServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L233}
  ///
  // clang-format on
  Status DeleteService(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Soft delete this `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.DeleteServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.DeleteServiceRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L233}
  ///
  // clang-format on
  Status DeleteService(
      google::monitoring::v3::DeleteServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Create a `ServiceLevelObjective` for the given `Service`.
  ///
  /// @param parent  Required. Resource name of the parent `Service`. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]
  /// @param service_level_objective  Required. The `ServiceLevelObjective` to create.
  ///  The provided `name` will be respected if no `ServiceLevelObjective` exists
  ///  with this name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L246}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  CreateServiceLevelObjective(
      std::string const& parent,
      google::monitoring::v3::ServiceLevelObjective const&
          service_level_objective,
      Options opts = {});

  // clang-format off
  ///
  /// Create a `ServiceLevelObjective` for the given `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.CreateServiceLevelObjectiveRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.CreateServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L246}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  CreateServiceLevelObjective(
      google::monitoring::v3::CreateServiceLevelObjectiveRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Get a `ServiceLevelObjective` by name.
  ///
  /// @param name  Required. Resource name of the `ServiceLevelObjective` to get. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]/serviceLevelObjectives/[SLO_NAME]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L269}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  GetServiceLevelObjective(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Get a `ServiceLevelObjective` by name.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.GetServiceLevelObjectiveRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.GetServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L269}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  GetServiceLevelObjective(
      google::monitoring::v3::GetServiceLevelObjectiveRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List the `ServiceLevelObjective`s for the given `Service`.
  ///
  /// @param parent  Required. Resource name of the parent containing the listed SLOs, either a
  ///  project or a Monitoring Workspace. The formats are:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]
  ///      workspaces/[HOST_PROJECT_ID_OR_NUMBER]/services/-
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
  ///     [google.monitoring.v3.ServiceLevelObjective], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListServiceLevelObjectivesRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L288}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::ServiceLevelObjective>
  ListServiceLevelObjectives(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// List the `ServiceLevelObjective`s for the given `Service`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.ListServiceLevelObjectivesRequest].
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
  ///     [google.monitoring.v3.ServiceLevelObjective], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ListServiceLevelObjectivesRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L288}
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  ///
  // clang-format on
  StreamRange<google::monitoring::v3::ServiceLevelObjective>
  ListServiceLevelObjectives(
      google::monitoring::v3::ListServiceLevelObjectivesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Update the given `ServiceLevelObjective`.
  ///
  /// @param service_level_objective  Required. The `ServiceLevelObjective` to draw updates from.
  ///  The given `name` specifies the resource to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  /// [google.monitoring.v3.UpdateServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L332}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  UpdateServiceLevelObjective(
      google::monitoring::v3::ServiceLevelObjective const&
          service_level_objective,
      Options opts = {});

  // clang-format off
  ///
  /// Update the given `ServiceLevelObjective`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.UpdateServiceLevelObjectiveRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.v3.ServiceLevelObjective])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.ServiceLevelObjective]: @googleapis_reference_link{google/monitoring/v3/service.proto#L183}
  /// [google.monitoring.v3.UpdateServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L332}
  ///
  // clang-format on
  StatusOr<google::monitoring::v3::ServiceLevelObjective>
  UpdateServiceLevelObjective(
      google::monitoring::v3::UpdateServiceLevelObjectiveRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Delete the given `ServiceLevelObjective`.
  ///
  /// @param name  Required. Resource name of the `ServiceLevelObjective` to delete. The format is:
  ///  @n
  ///      projects/[PROJECT_ID_OR_NUMBER]/services/[SERVICE_ID]/serviceLevelObjectives/[SLO_NAME]
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.DeleteServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L342}
  ///
  // clang-format on
  Status DeleteServiceLevelObjective(std::string const& name,
                                     Options opts = {});

  // clang-format off
  ///
  /// Delete the given `ServiceLevelObjective`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.v3.DeleteServiceLevelObjectiveRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.v3.DeleteServiceLevelObjectiveRequest]: @googleapis_reference_link{google/monitoring/v3/service_service.proto#L342}
  ///
  // clang-format on
  Status DeleteServiceLevelObjective(
      google::monitoring::v3::DeleteServiceLevelObjectiveRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ServiceMonitoringServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CLIENT_H

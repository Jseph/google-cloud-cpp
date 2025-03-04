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
// source: google/cloud/discoveryengine/v1/document_service.proto

#include "google/cloud/discoveryengine/v1/document_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentServiceClient::DocumentServiceClient(
    std::shared_ptr<DocumentServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DocumentServiceClient::~DocumentServiceClient() = default;

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::GetDocument(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::GetDocumentRequest request;
  request.set_name(name);
  return connection_->GetDocument(request);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::GetDocument(
    google::cloud::discoveryengine::v1::GetDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDocument(request);
}

StreamRange<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::ListDocuments(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::ListDocumentsRequest request;
  request.set_parent(parent);
  return connection_->ListDocuments(request);
}

StreamRange<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::ListDocuments(
    google::cloud::discoveryengine::v1::ListDocumentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDocuments(std::move(request));
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::CreateDocument(
    std::string const& parent,
    google::cloud::discoveryengine::v1::Document const& document,
    std::string const& document_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::CreateDocumentRequest request;
  request.set_parent(parent);
  *request.mutable_document() = document;
  request.set_document_id(document_id);
  return connection_->CreateDocument(request);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::CreateDocument(
    google::cloud::discoveryengine::v1::CreateDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDocument(request);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceClient::UpdateDocument(
    google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDocument(request);
}

Status DocumentServiceClient::DeleteDocument(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::discoveryengine::v1::DeleteDocumentRequest request;
  request.set_name(name);
  return connection_->DeleteDocument(request);
}

Status DocumentServiceClient::DeleteDocument(
    google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDocument(request);
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
DocumentServiceClient::ImportDocuments(
    google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportDocuments(request);
}

future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
DocumentServiceClient::PurgeDocuments(
    google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PurgeDocuments(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

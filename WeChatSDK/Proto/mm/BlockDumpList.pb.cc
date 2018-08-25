// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BlockDumpList.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BlockDumpList.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class BlockDumpListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<BlockDumpList> {
} _BlockDumpList_default_instance_;

namespace protobuf_BlockDumpList_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockDumpList, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockDumpList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockDumpList, blockdump_),
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(BlockDumpList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_BlockDumpList_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "BlockDumpList.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _BlockDumpList_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _BlockDumpList_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\023BlockDumpList.proto\"\"\n\rBlockDumpList\022\021"
      "\n\tBlockDump\030\001 \003(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 57);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BlockDumpList.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_BlockDumpList_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockDumpList::kBlockDumpFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockDumpList::BlockDumpList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_BlockDumpList_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:BlockDumpList)
}
BlockDumpList::BlockDumpList(const BlockDumpList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      blockdump_(from.blockdump_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:BlockDumpList)
}

void BlockDumpList::SharedCtor() {
  _cached_size_ = 0;
}

BlockDumpList::~BlockDumpList() {
  // @@protoc_insertion_point(destructor:BlockDumpList)
  SharedDtor();
}

void BlockDumpList::SharedDtor() {
}

void BlockDumpList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlockDumpList::descriptor() {
  protobuf_BlockDumpList_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_BlockDumpList_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BlockDumpList& BlockDumpList::default_instance() {
  protobuf_BlockDumpList_2eproto::InitDefaults();
  return *internal_default_instance();
}

BlockDumpList* BlockDumpList::New(::google::protobuf::Arena* arena) const {
  BlockDumpList* n = new BlockDumpList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockDumpList::Clear() {
// @@protoc_insertion_point(message_clear_start:BlockDumpList)
  blockdump_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BlockDumpList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BlockDumpList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes BlockDump = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_blockdump()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:BlockDumpList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BlockDumpList)
  return false;
#undef DO_
}

void BlockDumpList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BlockDumpList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes BlockDump = 1;
  for (int i = 0, n = this->blockdump_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->blockdump(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:BlockDumpList)
}

::google::protobuf::uint8* BlockDumpList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:BlockDumpList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes BlockDump = 1;
  for (int i = 0, n = this->blockdump_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(1, this->blockdump(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BlockDumpList)
  return target;
}

size_t BlockDumpList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BlockDumpList)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated bytes BlockDump = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->blockdump_size());
  for (int i = 0, n = this->blockdump_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->blockdump(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlockDumpList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BlockDumpList)
  GOOGLE_DCHECK_NE(&from, this);
  const BlockDumpList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BlockDumpList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BlockDumpList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BlockDumpList)
    MergeFrom(*source);
  }
}

void BlockDumpList::MergeFrom(const BlockDumpList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BlockDumpList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  blockdump_.MergeFrom(from.blockdump_);
}

void BlockDumpList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BlockDumpList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockDumpList::CopyFrom(const BlockDumpList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BlockDumpList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockDumpList::IsInitialized() const {
  return true;
}

void BlockDumpList::Swap(BlockDumpList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockDumpList::InternalSwap(BlockDumpList* other) {
  blockdump_.InternalSwap(&other->blockdump_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BlockDumpList::GetMetadata() const {
  protobuf_BlockDumpList_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_BlockDumpList_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BlockDumpList

// repeated bytes BlockDump = 1;
int BlockDumpList::blockdump_size() const {
  return blockdump_.size();
}
void BlockDumpList::clear_blockdump() {
  blockdump_.Clear();
}
const ::std::string& BlockDumpList::blockdump(int index) const {
  // @@protoc_insertion_point(field_get:BlockDumpList.BlockDump)
  return blockdump_.Get(index);
}
::std::string* BlockDumpList::mutable_blockdump(int index) {
  // @@protoc_insertion_point(field_mutable:BlockDumpList.BlockDump)
  return blockdump_.Mutable(index);
}
void BlockDumpList::set_blockdump(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:BlockDumpList.BlockDump)
  blockdump_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void BlockDumpList::set_blockdump(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:BlockDumpList.BlockDump)
  blockdump_.Mutable(index)->assign(std::move(value));
}
#endif
void BlockDumpList::set_blockdump(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  blockdump_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:BlockDumpList.BlockDump)
}
void BlockDumpList::set_blockdump(int index, const void* value, size_t size) {
  blockdump_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:BlockDumpList.BlockDump)
}
::std::string* BlockDumpList::add_blockdump() {
  // @@protoc_insertion_point(field_add_mutable:BlockDumpList.BlockDump)
  return blockdump_.Add();
}
void BlockDumpList::add_blockdump(const ::std::string& value) {
  blockdump_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:BlockDumpList.BlockDump)
}
#if LANG_CXX11
void BlockDumpList::add_blockdump(::std::string&& value) {
  blockdump_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:BlockDumpList.BlockDump)
}
#endif
void BlockDumpList::add_blockdump(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  blockdump_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:BlockDumpList.BlockDump)
}
void BlockDumpList::add_blockdump(const void* value, size_t size) {
  blockdump_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:BlockDumpList.BlockDump)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
BlockDumpList::blockdump() const {
  // @@protoc_insertion_point(field_list:BlockDumpList.BlockDump)
  return blockdump_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
BlockDumpList::mutable_blockdump() {
  // @@protoc_insertion_point(field_mutable_list:BlockDumpList.BlockDump)
  return &blockdump_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

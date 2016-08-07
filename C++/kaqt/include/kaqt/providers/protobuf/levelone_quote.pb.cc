// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: levelone_quote.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "levelone_quote.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace kaqt {
namespace providers {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* LevelOneQuote_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LevelOneQuote_reflection_ = NULL;
const ::google::protobuf::Descriptor* HLOC_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HLOC_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_levelone_5fquote_2eproto() {
  protobuf_AddDesc_levelone_5fquote_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "levelone_quote.proto");
  GOOGLE_CHECK(file != NULL);
  LevelOneQuote_descriptor_ = file->message_type(0);
  static const int LevelOneQuote_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, instrument_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, bid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, ask_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, last_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, bid_qty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, ask_qty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, last_qty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, posix_time_),
  };
  LevelOneQuote_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LevelOneQuote_descriptor_,
      LevelOneQuote::default_instance_,
      LevelOneQuote_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LevelOneQuote, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LevelOneQuote));
  HLOC_descriptor_ = file->message_type(1);
  static const int HLOC_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, instrument_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, open_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, high_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, low_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, close_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, posix_time_),
  };
  HLOC_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HLOC_descriptor_,
      HLOC::default_instance_,
      HLOC_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HLOC, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HLOC));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_levelone_5fquote_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LevelOneQuote_descriptor_, &LevelOneQuote::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HLOC_descriptor_, &HLOC::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_levelone_5fquote_2eproto() {
  delete LevelOneQuote::default_instance_;
  delete LevelOneQuote_reflection_;
  delete HLOC::default_instance_;
  delete HLOC_reflection_;
}

void protobuf_AddDesc_levelone_5fquote_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024levelone_quote.proto\022\027kaqt.providers.p"
    "rotobuf\"\226\001\n\rLevelOneQuote\022\025\n\rinstrument_"
    "id\030\001 \002(\005\022\013\n\003bid\030\002 \002(\001\022\013\n\003ask\030\003 \002(\001\022\014\n\004la"
    "st\030\004 \002(\001\022\017\n\007bid_qty\030\005 \002(\005\022\017\n\007ask_qty\030\006 \002"
    "(\005\022\020\n\010last_qty\030\007 \002(\005\022\022\n\nposix_time\030\010 \002(\003"
    "\"i\n\004HLOC\022\025\n\rinstrument_id\030\001 \002(\005\022\014\n\004open\030"
    "\002 \002(\001\022\014\n\004high\030\003 \002(\001\022\013\n\003low\030\004 \002(\001\022\r\n\005clos"
    "e\030\005 \002(\001\022\022\n\nposix_time\030\006 \002(\003", 307);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "levelone_quote.proto", &protobuf_RegisterTypes);
  LevelOneQuote::default_instance_ = new LevelOneQuote();
  HLOC::default_instance_ = new HLOC();
  LevelOneQuote::default_instance_->InitAsDefaultInstance();
  HLOC::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_levelone_5fquote_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_levelone_5fquote_2eproto {
  StaticDescriptorInitializer_levelone_5fquote_2eproto() {
    protobuf_AddDesc_levelone_5fquote_2eproto();
  }
} static_descriptor_initializer_levelone_5fquote_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LevelOneQuote::kInstrumentIdFieldNumber;
const int LevelOneQuote::kBidFieldNumber;
const int LevelOneQuote::kAskFieldNumber;
const int LevelOneQuote::kLastFieldNumber;
const int LevelOneQuote::kBidQtyFieldNumber;
const int LevelOneQuote::kAskQtyFieldNumber;
const int LevelOneQuote::kLastQtyFieldNumber;
const int LevelOneQuote::kPosixTimeFieldNumber;
#endif  // !_MSC_VER

LevelOneQuote::LevelOneQuote()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:kaqt.providers.protobuf.LevelOneQuote)
}

void LevelOneQuote::InitAsDefaultInstance() {
}

LevelOneQuote::LevelOneQuote(const LevelOneQuote& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:kaqt.providers.protobuf.LevelOneQuote)
}

void LevelOneQuote::SharedCtor() {
  _cached_size_ = 0;
  instrument_id_ = 0;
  bid_ = 0;
  ask_ = 0;
  last_ = 0;
  bid_qty_ = 0;
  ask_qty_ = 0;
  last_qty_ = 0;
  posix_time_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LevelOneQuote::~LevelOneQuote() {
  // @@protoc_insertion_point(destructor:kaqt.providers.protobuf.LevelOneQuote)
  SharedDtor();
}

void LevelOneQuote::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LevelOneQuote::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LevelOneQuote::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LevelOneQuote_descriptor_;
}

const LevelOneQuote& LevelOneQuote::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_levelone_5fquote_2eproto();
  return *default_instance_;
}

LevelOneQuote* LevelOneQuote::default_instance_ = NULL;

LevelOneQuote* LevelOneQuote::New() const {
  return new LevelOneQuote;
}

void LevelOneQuote::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LevelOneQuote*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(bid_, posix_time_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LevelOneQuote::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:kaqt.providers.protobuf.LevelOneQuote)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 instrument_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &instrument_id_)));
          set_has_instrument_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_bid;
        break;
      }

      // required double bid = 2;
      case 2: {
        if (tag == 17) {
         parse_bid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &bid_)));
          set_has_bid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_ask;
        break;
      }

      // required double ask = 3;
      case 3: {
        if (tag == 25) {
         parse_ask:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &ask_)));
          set_has_ask();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_last;
        break;
      }

      // required double last = 4;
      case 4: {
        if (tag == 33) {
         parse_last:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &last_)));
          set_has_last();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_bid_qty;
        break;
      }

      // required int32 bid_qty = 5;
      case 5: {
        if (tag == 40) {
         parse_bid_qty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bid_qty_)));
          set_has_bid_qty();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_ask_qty;
        break;
      }

      // required int32 ask_qty = 6;
      case 6: {
        if (tag == 48) {
         parse_ask_qty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ask_qty_)));
          set_has_ask_qty();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_last_qty;
        break;
      }

      // required int32 last_qty = 7;
      case 7: {
        if (tag == 56) {
         parse_last_qty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_qty_)));
          set_has_last_qty();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_posix_time;
        break;
      }

      // required int64 posix_time = 8;
      case 8: {
        if (tag == 64) {
         parse_posix_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &posix_time_)));
          set_has_posix_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
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
  // @@protoc_insertion_point(parse_success:kaqt.providers.protobuf.LevelOneQuote)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:kaqt.providers.protobuf.LevelOneQuote)
  return false;
#undef DO_
}

void LevelOneQuote::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:kaqt.providers.protobuf.LevelOneQuote)
  // required int32 instrument_id = 1;
  if (has_instrument_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->instrument_id(), output);
  }

  // required double bid = 2;
  if (has_bid()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->bid(), output);
  }

  // required double ask = 3;
  if (has_ask()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->ask(), output);
  }

  // required double last = 4;
  if (has_last()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->last(), output);
  }

  // required int32 bid_qty = 5;
  if (has_bid_qty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->bid_qty(), output);
  }

  // required int32 ask_qty = 6;
  if (has_ask_qty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->ask_qty(), output);
  }

  // required int32 last_qty = 7;
  if (has_last_qty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->last_qty(), output);
  }

  // required int64 posix_time = 8;
  if (has_posix_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->posix_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:kaqt.providers.protobuf.LevelOneQuote)
}

::google::protobuf::uint8* LevelOneQuote::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaqt.providers.protobuf.LevelOneQuote)
  // required int32 instrument_id = 1;
  if (has_instrument_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->instrument_id(), target);
  }

  // required double bid = 2;
  if (has_bid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->bid(), target);
  }

  // required double ask = 3;
  if (has_ask()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->ask(), target);
  }

  // required double last = 4;
  if (has_last()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->last(), target);
  }

  // required int32 bid_qty = 5;
  if (has_bid_qty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->bid_qty(), target);
  }

  // required int32 ask_qty = 6;
  if (has_ask_qty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->ask_qty(), target);
  }

  // required int32 last_qty = 7;
  if (has_last_qty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->last_qty(), target);
  }

  // required int64 posix_time = 8;
  if (has_posix_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(8, this->posix_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaqt.providers.protobuf.LevelOneQuote)
  return target;
}

int LevelOneQuote::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 instrument_id = 1;
    if (has_instrument_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->instrument_id());
    }

    // required double bid = 2;
    if (has_bid()) {
      total_size += 1 + 8;
    }

    // required double ask = 3;
    if (has_ask()) {
      total_size += 1 + 8;
    }

    // required double last = 4;
    if (has_last()) {
      total_size += 1 + 8;
    }

    // required int32 bid_qty = 5;
    if (has_bid_qty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bid_qty());
    }

    // required int32 ask_qty = 6;
    if (has_ask_qty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ask_qty());
    }

    // required int32 last_qty = 7;
    if (has_last_qty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_qty());
    }

    // required int64 posix_time = 8;
    if (has_posix_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->posix_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LevelOneQuote::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LevelOneQuote* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LevelOneQuote*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LevelOneQuote::MergeFrom(const LevelOneQuote& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_instrument_id()) {
      set_instrument_id(from.instrument_id());
    }
    if (from.has_bid()) {
      set_bid(from.bid());
    }
    if (from.has_ask()) {
      set_ask(from.ask());
    }
    if (from.has_last()) {
      set_last(from.last());
    }
    if (from.has_bid_qty()) {
      set_bid_qty(from.bid_qty());
    }
    if (from.has_ask_qty()) {
      set_ask_qty(from.ask_qty());
    }
    if (from.has_last_qty()) {
      set_last_qty(from.last_qty());
    }
    if (from.has_posix_time()) {
      set_posix_time(from.posix_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LevelOneQuote::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LevelOneQuote::CopyFrom(const LevelOneQuote& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LevelOneQuote::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000ff) != 0x000000ff) return false;

  return true;
}

void LevelOneQuote::Swap(LevelOneQuote* other) {
  if (other != this) {
    std::swap(instrument_id_, other->instrument_id_);
    std::swap(bid_, other->bid_);
    std::swap(ask_, other->ask_);
    std::swap(last_, other->last_);
    std::swap(bid_qty_, other->bid_qty_);
    std::swap(ask_qty_, other->ask_qty_);
    std::swap(last_qty_, other->last_qty_);
    std::swap(posix_time_, other->posix_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LevelOneQuote::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LevelOneQuote_descriptor_;
  metadata.reflection = LevelOneQuote_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int HLOC::kInstrumentIdFieldNumber;
const int HLOC::kOpenFieldNumber;
const int HLOC::kHighFieldNumber;
const int HLOC::kLowFieldNumber;
const int HLOC::kCloseFieldNumber;
const int HLOC::kPosixTimeFieldNumber;
#endif  // !_MSC_VER

HLOC::HLOC()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:kaqt.providers.protobuf.HLOC)
}

void HLOC::InitAsDefaultInstance() {
}

HLOC::HLOC(const HLOC& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:kaqt.providers.protobuf.HLOC)
}

void HLOC::SharedCtor() {
  _cached_size_ = 0;
  instrument_id_ = 0;
  open_ = 0;
  high_ = 0;
  low_ = 0;
  close_ = 0;
  posix_time_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HLOC::~HLOC() {
  // @@protoc_insertion_point(destructor:kaqt.providers.protobuf.HLOC)
  SharedDtor();
}

void HLOC::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HLOC::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HLOC::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HLOC_descriptor_;
}

const HLOC& HLOC::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_levelone_5fquote_2eproto();
  return *default_instance_;
}

HLOC* HLOC::default_instance_ = NULL;

HLOC* HLOC::New() const {
  return new HLOC;
}

void HLOC::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<HLOC*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(open_, instrument_id_);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HLOC::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:kaqt.providers.protobuf.HLOC)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 instrument_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &instrument_id_)));
          set_has_instrument_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_open;
        break;
      }

      // required double open = 2;
      case 2: {
        if (tag == 17) {
         parse_open:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &open_)));
          set_has_open();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_high;
        break;
      }

      // required double high = 3;
      case 3: {
        if (tag == 25) {
         parse_high:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &high_)));
          set_has_high();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_low;
        break;
      }

      // required double low = 4;
      case 4: {
        if (tag == 33) {
         parse_low:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &low_)));
          set_has_low();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_close;
        break;
      }

      // required double close = 5;
      case 5: {
        if (tag == 41) {
         parse_close:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &close_)));
          set_has_close();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_posix_time;
        break;
      }

      // required int64 posix_time = 6;
      case 6: {
        if (tag == 48) {
         parse_posix_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &posix_time_)));
          set_has_posix_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
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
  // @@protoc_insertion_point(parse_success:kaqt.providers.protobuf.HLOC)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:kaqt.providers.protobuf.HLOC)
  return false;
#undef DO_
}

void HLOC::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:kaqt.providers.protobuf.HLOC)
  // required int32 instrument_id = 1;
  if (has_instrument_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->instrument_id(), output);
  }

  // required double open = 2;
  if (has_open()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->open(), output);
  }

  // required double high = 3;
  if (has_high()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->high(), output);
  }

  // required double low = 4;
  if (has_low()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->low(), output);
  }

  // required double close = 5;
  if (has_close()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->close(), output);
  }

  // required int64 posix_time = 6;
  if (has_posix_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->posix_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:kaqt.providers.protobuf.HLOC)
}

::google::protobuf::uint8* HLOC::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaqt.providers.protobuf.HLOC)
  // required int32 instrument_id = 1;
  if (has_instrument_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->instrument_id(), target);
  }

  // required double open = 2;
  if (has_open()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->open(), target);
  }

  // required double high = 3;
  if (has_high()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->high(), target);
  }

  // required double low = 4;
  if (has_low()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->low(), target);
  }

  // required double close = 5;
  if (has_close()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->close(), target);
  }

  // required int64 posix_time = 6;
  if (has_posix_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->posix_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaqt.providers.protobuf.HLOC)
  return target;
}

int HLOC::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 instrument_id = 1;
    if (has_instrument_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->instrument_id());
    }

    // required double open = 2;
    if (has_open()) {
      total_size += 1 + 8;
    }

    // required double high = 3;
    if (has_high()) {
      total_size += 1 + 8;
    }

    // required double low = 4;
    if (has_low()) {
      total_size += 1 + 8;
    }

    // required double close = 5;
    if (has_close()) {
      total_size += 1 + 8;
    }

    // required int64 posix_time = 6;
    if (has_posix_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->posix_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HLOC::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HLOC* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HLOC*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HLOC::MergeFrom(const HLOC& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_instrument_id()) {
      set_instrument_id(from.instrument_id());
    }
    if (from.has_open()) {
      set_open(from.open());
    }
    if (from.has_high()) {
      set_high(from.high());
    }
    if (from.has_low()) {
      set_low(from.low());
    }
    if (from.has_close()) {
      set_close(from.close());
    }
    if (from.has_posix_time()) {
      set_posix_time(from.posix_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HLOC::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HLOC::CopyFrom(const HLOC& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HLOC::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void HLOC::Swap(HLOC* other) {
  if (other != this) {
    std::swap(instrument_id_, other->instrument_id_);
    std::swap(open_, other->open_);
    std::swap(high_, other->high_);
    std::swap(low_, other->low_);
    std::swap(close_, other->close_);
    std::swap(posix_time_, other->posix_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HLOC::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HLOC_descriptor_;
  metadata.reflection = HLOC_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace providers
}  // namespace kaqt

// @@protoc_insertion_point(global_scope)

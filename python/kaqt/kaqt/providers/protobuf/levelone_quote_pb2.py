# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: levelone_quote.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='levelone_quote.proto',
  package='kaqt.providers.protobuf',
  serialized_pb=_b('\n\x14levelone_quote.proto\x12\x17kaqt.providers.protobuf\"\x96\x01\n\rLevelOneQuote\x12\x15\n\rinstrument_id\x18\x01 \x02(\x05\x12\x0b\n\x03\x62id\x18\x02 \x02(\x01\x12\x0b\n\x03\x61sk\x18\x03 \x02(\x01\x12\x0c\n\x04last\x18\x04 \x02(\x01\x12\x0f\n\x07\x62id_qty\x18\x05 \x02(\x05\x12\x0f\n\x07\x61sk_qty\x18\x06 \x02(\x05\x12\x10\n\x08last_qty\x18\x07 \x02(\x05\x12\x12\n\nposix_time\x18\x08 \x02(\x03\"i\n\x04HLOC\x12\x15\n\rinstrument_id\x18\x01 \x02(\x05\x12\x0c\n\x04open\x18\x02 \x02(\x01\x12\x0c\n\x04high\x18\x03 \x02(\x01\x12\x0b\n\x03low\x18\x04 \x02(\x01\x12\r\n\x05\x63lose\x18\x05 \x02(\x01\x12\x12\n\nposix_time\x18\x06 \x02(\x03')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_LEVELONEQUOTE = _descriptor.Descriptor(
  name='LevelOneQuote',
  full_name='kaqt.providers.protobuf.LevelOneQuote',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='instrument_id', full_name='kaqt.providers.protobuf.LevelOneQuote.instrument_id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid', full_name='kaqt.providers.protobuf.LevelOneQuote.bid', index=1,
      number=2, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask', full_name='kaqt.providers.protobuf.LevelOneQuote.ask', index=2,
      number=3, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last', full_name='kaqt.providers.protobuf.LevelOneQuote.last', index=3,
      number=4, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_qty', full_name='kaqt.providers.protobuf.LevelOneQuote.bid_qty', index=4,
      number=5, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_qty', full_name='kaqt.providers.protobuf.LevelOneQuote.ask_qty', index=5,
      number=6, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_qty', full_name='kaqt.providers.protobuf.LevelOneQuote.last_qty', index=6,
      number=7, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='posix_time', full_name='kaqt.providers.protobuf.LevelOneQuote.posix_time', index=7,
      number=8, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=50,
  serialized_end=200,
)


_HLOC = _descriptor.Descriptor(
  name='HLOC',
  full_name='kaqt.providers.protobuf.HLOC',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='instrument_id', full_name='kaqt.providers.protobuf.HLOC.instrument_id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='open', full_name='kaqt.providers.protobuf.HLOC.open', index=1,
      number=2, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='high', full_name='kaqt.providers.protobuf.HLOC.high', index=2,
      number=3, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='low', full_name='kaqt.providers.protobuf.HLOC.low', index=3,
      number=4, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='close', full_name='kaqt.providers.protobuf.HLOC.close', index=4,
      number=5, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='posix_time', full_name='kaqt.providers.protobuf.HLOC.posix_time', index=5,
      number=6, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=202,
  serialized_end=307,
)

DESCRIPTOR.message_types_by_name['LevelOneQuote'] = _LEVELONEQUOTE
DESCRIPTOR.message_types_by_name['HLOC'] = _HLOC

LevelOneQuote = _reflection.GeneratedProtocolMessageType('LevelOneQuote', (_message.Message,), dict(
  DESCRIPTOR = _LEVELONEQUOTE,
  __module__ = 'levelone_quote_pb2'
  # @@protoc_insertion_point(class_scope:kaqt.providers.protobuf.LevelOneQuote)
  ))
_sym_db.RegisterMessage(LevelOneQuote)

HLOC = _reflection.GeneratedProtocolMessageType('HLOC', (_message.Message,), dict(
  DESCRIPTOR = _HLOC,
  __module__ = 'levelone_quote_pb2'
  # @@protoc_insertion_point(class_scope:kaqt.providers.protobuf.HLOC)
  ))
_sym_db.RegisterMessage(HLOC)


# @@protoc_insertion_point(module_scope)

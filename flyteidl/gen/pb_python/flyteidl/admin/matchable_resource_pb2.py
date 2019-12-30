# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: flyteidl/admin/matchable_resource.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='flyteidl/admin/matchable_resource.proto',
  package='flyteidl.admin',
  syntax='proto3',
  serialized_options=_b('Z1github.com/lyft/flyteidl/gen/pb-go/flyteidl/admin'),
  serialized_pb=_b('\n\'flyteidl/admin/matchable_resource.proto\x12\x0e\x66lyteidl.admin\"M\n\x10TaskResourceSpec\x12\x0b\n\x03\x63pu\x18\x01 \x01(\t\x12\x0b\n\x03gpu\x18\x02 \x01(\t\x12\x0e\n\x06memory\x18\x03 \x01(\t\x12\x0f\n\x07storage\x18\x04 \x01(\t\"~\n\x16TaskResourceAttributes\x12\x32\n\x08\x64\x65\x66\x61ults\x18\x01 \x01(\x0b\x32 .flyteidl.admin.TaskResourceSpec\x12\x30\n\x06limits\x18\x02 \x01(\x0b\x32 .flyteidl.admin.TaskResourceSpec\"\x9d\x01\n\x19\x43lusterResourceAttributes\x12M\n\nattributes\x18\x01 \x03(\x0b\x32\x39.flyteidl.admin.ClusterResourceAttributes.AttributesEntry\x1a\x31\n\x0f\x41ttributesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\"(\n\x18\x45xecutionQueueAttributes\x12\x0c\n\x04tags\x18\x01 \x03(\t\"\x8c\x02\n\x12MatchingAttributes\x12J\n\x18task_resource_attributes\x18\x01 \x01(\x0b\x32&.flyteidl.admin.TaskResourceAttributesH\x00\x12P\n\x1b\x63luster_resource_attributes\x18\x02 \x01(\x0b\x32).flyteidl.admin.ClusterResourceAttributesH\x00\x12N\n\x1a\x65xecution_queue_attributes\x18\x03 \x01(\x0b\x32(.flyteidl.admin.ExecutionQueueAttributesH\x00\x42\x08\n\x06target*Q\n\x11MatchableResource\x12\x11\n\rTASK_RESOURCE\x10\x00\x12\x14\n\x10\x43LUSTER_RESOURCE\x10\x01\x12\x13\n\x0f\x45XECUTION_QUEUE\x10\x02\x42\x33Z1github.com/lyft/flyteidl/gen/pb-go/flyteidl/adminb\x06proto3')
)

_MATCHABLERESOURCE = _descriptor.EnumDescriptor(
  name='MatchableResource',
  full_name='flyteidl.admin.MatchableResource',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TASK_RESOURCE', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CLUSTER_RESOURCE', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXECUTION_QUEUE', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=739,
  serialized_end=820,
)
_sym_db.RegisterEnumDescriptor(_MATCHABLERESOURCE)

MatchableResource = enum_type_wrapper.EnumTypeWrapper(_MATCHABLERESOURCE)
TASK_RESOURCE = 0
CLUSTER_RESOURCE = 1
EXECUTION_QUEUE = 2



_TASKRESOURCESPEC = _descriptor.Descriptor(
  name='TaskResourceSpec',
  full_name='flyteidl.admin.TaskResourceSpec',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='cpu', full_name='flyteidl.admin.TaskResourceSpec.cpu', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gpu', full_name='flyteidl.admin.TaskResourceSpec.gpu', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='memory', full_name='flyteidl.admin.TaskResourceSpec.memory', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='storage', full_name='flyteidl.admin.TaskResourceSpec.storage', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=59,
  serialized_end=136,
)


_TASKRESOURCEATTRIBUTES = _descriptor.Descriptor(
  name='TaskResourceAttributes',
  full_name='flyteidl.admin.TaskResourceAttributes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='defaults', full_name='flyteidl.admin.TaskResourceAttributes.defaults', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='limits', full_name='flyteidl.admin.TaskResourceAttributes.limits', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=138,
  serialized_end=264,
)


_CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY = _descriptor.Descriptor(
  name='AttributesEntry',
  full_name='flyteidl.admin.ClusterResourceAttributes.AttributesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='flyteidl.admin.ClusterResourceAttributes.AttributesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='flyteidl.admin.ClusterResourceAttributes.AttributesEntry.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=375,
  serialized_end=424,
)

_CLUSTERRESOURCEATTRIBUTES = _descriptor.Descriptor(
  name='ClusterResourceAttributes',
  full_name='flyteidl.admin.ClusterResourceAttributes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='attributes', full_name='flyteidl.admin.ClusterResourceAttributes.attributes', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=267,
  serialized_end=424,
)


_EXECUTIONQUEUEATTRIBUTES = _descriptor.Descriptor(
  name='ExecutionQueueAttributes',
  full_name='flyteidl.admin.ExecutionQueueAttributes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tags', full_name='flyteidl.admin.ExecutionQueueAttributes.tags', index=0,
      number=1, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=426,
  serialized_end=466,
)


_MATCHINGATTRIBUTES = _descriptor.Descriptor(
  name='MatchingAttributes',
  full_name='flyteidl.admin.MatchingAttributes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='task_resource_attributes', full_name='flyteidl.admin.MatchingAttributes.task_resource_attributes', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='cluster_resource_attributes', full_name='flyteidl.admin.MatchingAttributes.cluster_resource_attributes', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='execution_queue_attributes', full_name='flyteidl.admin.MatchingAttributes.execution_queue_attributes', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='target', full_name='flyteidl.admin.MatchingAttributes.target',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=469,
  serialized_end=737,
)

_TASKRESOURCEATTRIBUTES.fields_by_name['defaults'].message_type = _TASKRESOURCESPEC
_TASKRESOURCEATTRIBUTES.fields_by_name['limits'].message_type = _TASKRESOURCESPEC
_CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY.containing_type = _CLUSTERRESOURCEATTRIBUTES
_CLUSTERRESOURCEATTRIBUTES.fields_by_name['attributes'].message_type = _CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY
_MATCHINGATTRIBUTES.fields_by_name['task_resource_attributes'].message_type = _TASKRESOURCEATTRIBUTES
_MATCHINGATTRIBUTES.fields_by_name['cluster_resource_attributes'].message_type = _CLUSTERRESOURCEATTRIBUTES
_MATCHINGATTRIBUTES.fields_by_name['execution_queue_attributes'].message_type = _EXECUTIONQUEUEATTRIBUTES
_MATCHINGATTRIBUTES.oneofs_by_name['target'].fields.append(
  _MATCHINGATTRIBUTES.fields_by_name['task_resource_attributes'])
_MATCHINGATTRIBUTES.fields_by_name['task_resource_attributes'].containing_oneof = _MATCHINGATTRIBUTES.oneofs_by_name['target']
_MATCHINGATTRIBUTES.oneofs_by_name['target'].fields.append(
  _MATCHINGATTRIBUTES.fields_by_name['cluster_resource_attributes'])
_MATCHINGATTRIBUTES.fields_by_name['cluster_resource_attributes'].containing_oneof = _MATCHINGATTRIBUTES.oneofs_by_name['target']
_MATCHINGATTRIBUTES.oneofs_by_name['target'].fields.append(
  _MATCHINGATTRIBUTES.fields_by_name['execution_queue_attributes'])
_MATCHINGATTRIBUTES.fields_by_name['execution_queue_attributes'].containing_oneof = _MATCHINGATTRIBUTES.oneofs_by_name['target']
DESCRIPTOR.message_types_by_name['TaskResourceSpec'] = _TASKRESOURCESPEC
DESCRIPTOR.message_types_by_name['TaskResourceAttributes'] = _TASKRESOURCEATTRIBUTES
DESCRIPTOR.message_types_by_name['ClusterResourceAttributes'] = _CLUSTERRESOURCEATTRIBUTES
DESCRIPTOR.message_types_by_name['ExecutionQueueAttributes'] = _EXECUTIONQUEUEATTRIBUTES
DESCRIPTOR.message_types_by_name['MatchingAttributes'] = _MATCHINGATTRIBUTES
DESCRIPTOR.enum_types_by_name['MatchableResource'] = _MATCHABLERESOURCE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TaskResourceSpec = _reflection.GeneratedProtocolMessageType('TaskResourceSpec', (_message.Message,), dict(
  DESCRIPTOR = _TASKRESOURCESPEC,
  __module__ = 'flyteidl.admin.matchable_resource_pb2'
  # @@protoc_insertion_point(class_scope:flyteidl.admin.TaskResourceSpec)
  ))
_sym_db.RegisterMessage(TaskResourceSpec)

TaskResourceAttributes = _reflection.GeneratedProtocolMessageType('TaskResourceAttributes', (_message.Message,), dict(
  DESCRIPTOR = _TASKRESOURCEATTRIBUTES,
  __module__ = 'flyteidl.admin.matchable_resource_pb2'
  # @@protoc_insertion_point(class_scope:flyteidl.admin.TaskResourceAttributes)
  ))
_sym_db.RegisterMessage(TaskResourceAttributes)

ClusterResourceAttributes = _reflection.GeneratedProtocolMessageType('ClusterResourceAttributes', (_message.Message,), dict(

  AttributesEntry = _reflection.GeneratedProtocolMessageType('AttributesEntry', (_message.Message,), dict(
    DESCRIPTOR = _CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY,
    __module__ = 'flyteidl.admin.matchable_resource_pb2'
    # @@protoc_insertion_point(class_scope:flyteidl.admin.ClusterResourceAttributes.AttributesEntry)
    ))
  ,
  DESCRIPTOR = _CLUSTERRESOURCEATTRIBUTES,
  __module__ = 'flyteidl.admin.matchable_resource_pb2'
  # @@protoc_insertion_point(class_scope:flyteidl.admin.ClusterResourceAttributes)
  ))
_sym_db.RegisterMessage(ClusterResourceAttributes)
_sym_db.RegisterMessage(ClusterResourceAttributes.AttributesEntry)

ExecutionQueueAttributes = _reflection.GeneratedProtocolMessageType('ExecutionQueueAttributes', (_message.Message,), dict(
  DESCRIPTOR = _EXECUTIONQUEUEATTRIBUTES,
  __module__ = 'flyteidl.admin.matchable_resource_pb2'
  # @@protoc_insertion_point(class_scope:flyteidl.admin.ExecutionQueueAttributes)
  ))
_sym_db.RegisterMessage(ExecutionQueueAttributes)

MatchingAttributes = _reflection.GeneratedProtocolMessageType('MatchingAttributes', (_message.Message,), dict(
  DESCRIPTOR = _MATCHINGATTRIBUTES,
  __module__ = 'flyteidl.admin.matchable_resource_pb2'
  # @@protoc_insertion_point(class_scope:flyteidl.admin.MatchingAttributes)
  ))
_sym_db.RegisterMessage(MatchingAttributes)


DESCRIPTOR._options = None
_CLUSTERRESOURCEATTRIBUTES_ATTRIBUTESENTRY._options = None
# @@protoc_insertion_point(module_scope)

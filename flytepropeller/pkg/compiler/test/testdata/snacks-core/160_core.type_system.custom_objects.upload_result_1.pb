
�
1"-core.type_system.custom_objects.upload_resultpython-task0.32.6python* "�
 �
�
o0�
�	2�
4
$schema)'http://json-schema.org/draft-07/schema#
�
definitions�*�
�
ResultSchema�*�

typeobject

additionalProperties  
�

properties�*�
a
	directoryT*R
,
$ref$"#/definitions/FlytedirectorySchema


field_many  

typeobject
[
schemaQ*O
)
$ref!#/definitions/FlyteschemaSchema

typeobject


field_many  
W
fileO*M
'
$ref#/definitions/FlytefileSchema

typeobject


field_many  
�
FlytedirectorySchemaq*o
?

properties1*/
-
path%*#

typestring

titlepath

typeobject

additionalProperties  
�
FlyteschemaSchema*}

typeobject

additionalProperties  
M

properties?*=
;
remote_path,**

titleremote_path

typestring
�
FlytefileSchemaq*o

typeobject
?

properties1*/
-
path%*#

titlepath

typestring

additionalProperties  
$
$ref#/definitions/ResultSchemao02�
Lghcr.io/flyteorg/flytecookbook:core-8b8e1a849c9adfca88049a074b10dad278f70077pyflyte-execute--inputs
{{.input}}--output-prefix{{.outputPrefix}}--raw-output-data-prefix{{.rawOutputDataPrefix}}--checkpoint-path{{.checkpointOutputPrefix}}--prev-checkpoint{{.prevCheckpointPrefix}}
--resolver9flytekit.core.python_auto_container.default_task_resolver--task-modulecore.type_system.custom_objects	task-nameupload_result" 
// Code generated by mockery v1.0.1. DO NOT EDIT.

package mocks

import (
	core "github.com/flyteorg/flyte/flyteplugins/go/tasks/pluginmachinery/core"
	io "github.com/flyteorg/flyte/flyteplugins/go/tasks/pluginmachinery/io"

	mock "github.com/stretchr/testify/mock"

	storage "github.com/flyteorg/flyte/flytestdlib/storage"
)

// TaskExecutionContext is an autogenerated mock type for the TaskExecutionContext type
type TaskExecutionContext struct {
	mock.Mock
}

type TaskExecutionContext_DataStore struct {
	*mock.Call
}

func (_m TaskExecutionContext_DataStore) Return(_a0 *storage.DataStore) *TaskExecutionContext_DataStore {
	return &TaskExecutionContext_DataStore{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnDataStore() *TaskExecutionContext_DataStore {
	c_call := _m.On("DataStore")
	return &TaskExecutionContext_DataStore{Call: c_call}
}

func (_m *TaskExecutionContext) OnDataStoreMatch(matchers ...interface{}) *TaskExecutionContext_DataStore {
	c_call := _m.On("DataStore", matchers...)
	return &TaskExecutionContext_DataStore{Call: c_call}
}

// DataStore provides a mock function with given fields:
func (_m *TaskExecutionContext) DataStore() *storage.DataStore {
	ret := _m.Called()

	var r0 *storage.DataStore
	if rf, ok := ret.Get(0).(func() *storage.DataStore); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*storage.DataStore)
		}
	}

	return r0
}

type TaskExecutionContext_InputReader struct {
	*mock.Call
}

func (_m TaskExecutionContext_InputReader) Return(_a0 io.InputReader) *TaskExecutionContext_InputReader {
	return &TaskExecutionContext_InputReader{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnInputReader() *TaskExecutionContext_InputReader {
	c_call := _m.On("InputReader")
	return &TaskExecutionContext_InputReader{Call: c_call}
}

func (_m *TaskExecutionContext) OnInputReaderMatch(matchers ...interface{}) *TaskExecutionContext_InputReader {
	c_call := _m.On("InputReader", matchers...)
	return &TaskExecutionContext_InputReader{Call: c_call}
}

// InputReader provides a mock function with given fields:
func (_m *TaskExecutionContext) InputReader() io.InputReader {
	ret := _m.Called()

	var r0 io.InputReader
	if rf, ok := ret.Get(0).(func() io.InputReader); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(io.InputReader)
		}
	}

	return r0
}

type TaskExecutionContext_OutputWriter struct {
	*mock.Call
}

func (_m TaskExecutionContext_OutputWriter) Return(_a0 io.OutputWriter) *TaskExecutionContext_OutputWriter {
	return &TaskExecutionContext_OutputWriter{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnOutputWriter() *TaskExecutionContext_OutputWriter {
	c_call := _m.On("OutputWriter")
	return &TaskExecutionContext_OutputWriter{Call: c_call}
}

func (_m *TaskExecutionContext) OnOutputWriterMatch(matchers ...interface{}) *TaskExecutionContext_OutputWriter {
	c_call := _m.On("OutputWriter", matchers...)
	return &TaskExecutionContext_OutputWriter{Call: c_call}
}

// OutputWriter provides a mock function with given fields:
func (_m *TaskExecutionContext) OutputWriter() io.OutputWriter {
	ret := _m.Called()

	var r0 io.OutputWriter
	if rf, ok := ret.Get(0).(func() io.OutputWriter); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(io.OutputWriter)
		}
	}

	return r0
}

type TaskExecutionContext_SecretManager struct {
	*mock.Call
}

func (_m TaskExecutionContext_SecretManager) Return(_a0 core.SecretManager) *TaskExecutionContext_SecretManager {
	return &TaskExecutionContext_SecretManager{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnSecretManager() *TaskExecutionContext_SecretManager {
	c_call := _m.On("SecretManager")
	return &TaskExecutionContext_SecretManager{Call: c_call}
}

func (_m *TaskExecutionContext) OnSecretManagerMatch(matchers ...interface{}) *TaskExecutionContext_SecretManager {
	c_call := _m.On("SecretManager", matchers...)
	return &TaskExecutionContext_SecretManager{Call: c_call}
}

// SecretManager provides a mock function with given fields:
func (_m *TaskExecutionContext) SecretManager() core.SecretManager {
	ret := _m.Called()

	var r0 core.SecretManager
	if rf, ok := ret.Get(0).(func() core.SecretManager); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.SecretManager)
		}
	}

	return r0
}

type TaskExecutionContext_TaskExecutionMetadata struct {
	*mock.Call
}

func (_m TaskExecutionContext_TaskExecutionMetadata) Return(_a0 core.TaskExecutionMetadata) *TaskExecutionContext_TaskExecutionMetadata {
	return &TaskExecutionContext_TaskExecutionMetadata{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnTaskExecutionMetadata() *TaskExecutionContext_TaskExecutionMetadata {
	c_call := _m.On("TaskExecutionMetadata")
	return &TaskExecutionContext_TaskExecutionMetadata{Call: c_call}
}

func (_m *TaskExecutionContext) OnTaskExecutionMetadataMatch(matchers ...interface{}) *TaskExecutionContext_TaskExecutionMetadata {
	c_call := _m.On("TaskExecutionMetadata", matchers...)
	return &TaskExecutionContext_TaskExecutionMetadata{Call: c_call}
}

// TaskExecutionMetadata provides a mock function with given fields:
func (_m *TaskExecutionContext) TaskExecutionMetadata() core.TaskExecutionMetadata {
	ret := _m.Called()

	var r0 core.TaskExecutionMetadata
	if rf, ok := ret.Get(0).(func() core.TaskExecutionMetadata); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.TaskExecutionMetadata)
		}
	}

	return r0
}

type TaskExecutionContext_TaskReader struct {
	*mock.Call
}

func (_m TaskExecutionContext_TaskReader) Return(_a0 core.TaskReader) *TaskExecutionContext_TaskReader {
	return &TaskExecutionContext_TaskReader{Call: _m.Call.Return(_a0)}
}

func (_m *TaskExecutionContext) OnTaskReader() *TaskExecutionContext_TaskReader {
	c_call := _m.On("TaskReader")
	return &TaskExecutionContext_TaskReader{Call: c_call}
}

func (_m *TaskExecutionContext) OnTaskReaderMatch(matchers ...interface{}) *TaskExecutionContext_TaskReader {
	c_call := _m.On("TaskReader", matchers...)
	return &TaskExecutionContext_TaskReader{Call: c_call}
}

// TaskReader provides a mock function with given fields:
func (_m *TaskExecutionContext) TaskReader() core.TaskReader {
	ret := _m.Called()

	var r0 core.TaskReader
	if rf, ok := ret.Get(0).(func() core.TaskReader); ok {
		r0 = rf()
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(core.TaskReader)
		}
	}

	return r0
}

// Code generated by protoc-gen-validate. DO NOT EDIT.
// source: flyteidl/admin/project_attributes.proto

package admin

import (
	"bytes"
	"errors"
	"fmt"
	"net"
	"net/mail"
	"net/url"
	"regexp"
	"strings"
	"time"
	"unicode/utf8"

	"github.com/golang/protobuf/ptypes"
)

// ensure the imports are used
var (
	_ = bytes.MinRead
	_ = errors.New("")
	_ = fmt.Print
	_ = utf8.UTFMax
	_ = (*regexp.Regexp)(nil)
	_ = (*strings.Reader)(nil)
	_ = net.IPv4len
	_ = time.Duration(0)
	_ = (*url.URL)(nil)
	_ = (*mail.Address)(nil)
	_ = ptypes.DynamicAny{}
)

// define the regex for a UUID once up-front
var _project_attributes_uuidPattern = regexp.MustCompile("^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$")

// Validate checks the field values on ProjectAttributes with the rules defined
// in the proto definition for this message. If any rules are violated, an
// error is returned.
func (m *ProjectAttributes) Validate() error {
	if m == nil {
		return nil
	}

	// no validation rules for Project

	if v, ok := interface{}(m.GetMatchingAttributes()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return ProjectAttributesValidationError{
				field:  "MatchingAttributes",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// ProjectAttributesValidationError is the validation error returned by
// ProjectAttributes.Validate if the designated constraints aren't met.
type ProjectAttributesValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e ProjectAttributesValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e ProjectAttributesValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e ProjectAttributesValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e ProjectAttributesValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e ProjectAttributesValidationError) ErrorName() string {
	return "ProjectAttributesValidationError"
}

// Error satisfies the builtin error interface
func (e ProjectAttributesValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sProjectAttributes.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = ProjectAttributesValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = ProjectAttributesValidationError{}

// Validate checks the field values on ProjectAttributesUpdateRequest with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *ProjectAttributesUpdateRequest) Validate() error {
	if m == nil {
		return nil
	}

	if v, ok := interface{}(m.GetAttributes()).(interface{ Validate() error }); ok {
		if err := v.Validate(); err != nil {
			return ProjectAttributesUpdateRequestValidationError{
				field:  "Attributes",
				reason: "embedded message failed validation",
				cause:  err,
			}
		}
	}

	return nil
}

// ProjectAttributesUpdateRequestValidationError is the validation error
// returned by ProjectAttributesUpdateRequest.Validate if the designated
// constraints aren't met.
type ProjectAttributesUpdateRequestValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e ProjectAttributesUpdateRequestValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e ProjectAttributesUpdateRequestValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e ProjectAttributesUpdateRequestValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e ProjectAttributesUpdateRequestValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e ProjectAttributesUpdateRequestValidationError) ErrorName() string {
	return "ProjectAttributesUpdateRequestValidationError"
}

// Error satisfies the builtin error interface
func (e ProjectAttributesUpdateRequestValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sProjectAttributesUpdateRequest.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = ProjectAttributesUpdateRequestValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = ProjectAttributesUpdateRequestValidationError{}

// Validate checks the field values on ProjectAttributesUpdateResponse with the
// rules defined in the proto definition for this message. If any rules are
// violated, an error is returned.
func (m *ProjectAttributesUpdateResponse) Validate() error {
	if m == nil {
		return nil
	}

	return nil
}

// ProjectAttributesUpdateResponseValidationError is the validation error
// returned by ProjectAttributesUpdateResponse.Validate if the designated
// constraints aren't met.
type ProjectAttributesUpdateResponseValidationError struct {
	field  string
	reason string
	cause  error
	key    bool
}

// Field function returns field value.
func (e ProjectAttributesUpdateResponseValidationError) Field() string { return e.field }

// Reason function returns reason value.
func (e ProjectAttributesUpdateResponseValidationError) Reason() string { return e.reason }

// Cause function returns cause value.
func (e ProjectAttributesUpdateResponseValidationError) Cause() error { return e.cause }

// Key function returns key value.
func (e ProjectAttributesUpdateResponseValidationError) Key() bool { return e.key }

// ErrorName returns error name.
func (e ProjectAttributesUpdateResponseValidationError) ErrorName() string {
	return "ProjectAttributesUpdateResponseValidationError"
}

// Error satisfies the builtin error interface
func (e ProjectAttributesUpdateResponseValidationError) Error() string {
	cause := ""
	if e.cause != nil {
		cause = fmt.Sprintf(" | caused by: %v", e.cause)
	}

	key := ""
	if e.key {
		key = "key for "
	}

	return fmt.Sprintf(
		"invalid %sProjectAttributesUpdateResponse.%s: %s%s",
		key,
		e.field,
		e.reason,
		cause)
}

var _ error = ProjectAttributesUpdateResponseValidationError{}

var _ interface {
	Field() string
	Reason() string
	Key() bool
	Cause() error
	ErrorName() string
} = ProjectAttributesUpdateResponseValidationError{}

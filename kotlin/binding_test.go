package kotlin_test

import (
	"context"
	"testing"

	"github.com/stretchr/testify/assert"
	sitter "github.com/zzctmac/go-tree-sitter"
	"github.com/zzctmac/go-tree-sitter/kotlin"
)

var ktCode = `
import java.time.LocalDateTime

fun main(args: Array<String>) {

	val current = LocalDateTime.now()

	println("Current Date and Time is: $current")
}
`

var output = `(source_file (import_list (import_header (identifier (simple_identifier) (simple_identifier) (simple_identifier)))) (function_declaration (simple_identifier) (function_value_parameters (parameter (simple_identifier) (user_type (type_identifier) (type_arguments (type_projection (user_type (type_identifier))))))) (function_body (statements (property_declaration (variable_declaration (simple_identifier)) (call_expression (navigation_expression (simple_identifier) (navigation_suffix (simple_identifier))) (call_suffix (value_arguments)))) (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument (string_literal (interpolated_identifier))))))))))`

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(ktCode), kotlin.GetLanguage())
	assert.Nil(t, err)
	assert.Equal(t, n.String(), output)
}

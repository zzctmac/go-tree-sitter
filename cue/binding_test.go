package cue_test

import (
	"context"
	"testing"

	"github.com/stretchr/testify/assert"
	sitter "github.com/zzctmac/go-tree-sitter"
	"github.com/zzctmac/go-tree-sitter/cue"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	code := `a: {
		F=f: string
		X="my-identifier": bool
	}
`

	n, err := sitter.ParseCtx(context.Background(), []byte(code), cue.GetLanguage())
	assert.NoError(err)
	assert.Equal(
		"(source_file (field (label (identifier)) (value (struct_lit (field (label alias: (identifier) (identifier)) (value (primitive_type))) (field (label alias: (identifier) (string)) (value (primitive_type)))))))",
		n.String(),
	)
}

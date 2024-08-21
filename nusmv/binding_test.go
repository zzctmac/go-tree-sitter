package nusmv_test

import (
	"context"
	"testing"

	"github.com/stretchr/testify/assert"
	sitter "github.com/zzctmac/go-tree-sitter"
	"github.com/zzctmac/go-tree-sitter/nusmv"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	n, err := sitter.ParseCtx(context.Background(), []byte("MODULE a1 (c,d)"), nusmv.GetLanguage())
	assert.NoError(err)
	assert.Equal(
		"(source_file (module (identifier) (module_parameters (identifier) (identifier))))",
		n.String(),
	)
}

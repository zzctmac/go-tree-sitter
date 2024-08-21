package ruby_test

import (
	"context"
	"testing"

	"github.com/stretchr/testify/assert"
	sitter "github.com/zzctmac/go-tree-sitter"
	"github.com/zzctmac/go-tree-sitter/ruby"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	n, err := sitter.ParseCtx(context.Background(), []byte("puts 1"), ruby.GetLanguage())
	assert.NoError(err)
	assert.Equal(
		"(program (call method: (identifier) arguments: (argument_list (integer))))",
		n.String(),
	)
}

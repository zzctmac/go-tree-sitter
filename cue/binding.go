package cue

//#include "parser.h"
//TSLanguage *tree_sitter_cue();
import "C"
import (
	"unsafe"

	sitter "github.com/zzctmac/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_cue())
	return sitter.NewLanguage(ptr)
}

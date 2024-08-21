package c

//#include "parser.h"
//TSLanguage *tree_sitter_c();
import "C"
import (
	"unsafe"

	sitter "github.com/zzctmac/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_c())
	return sitter.NewLanguage(ptr)
}

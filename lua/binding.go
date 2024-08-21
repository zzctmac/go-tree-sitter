package lua

//#include "parser.h"
//TSLanguage *tree_sitter_lua();
import "C"
import (
	"unsafe"

	sitter "github.com/zzctmac/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_lua())
	return sitter.NewLanguage(ptr)
}

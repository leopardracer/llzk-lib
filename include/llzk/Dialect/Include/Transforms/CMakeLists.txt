include_directories(${MLIR_INCLUDE_DIRS} ${LLZK_INCLUDE_DIR})

set(LLVM_TARGET_DEFINITIONS "InlineIncludesPass.td")
mlir_tablegen(InlineIncludesPass.h.inc -gen-pass-decls -name=Transformation)
llzk_add_mlir_doc(InlineIncludesPassDocGen passes/InlineIncludesPass.md -gen-pass-doc)

add_public_tablegen_target(InlineIncludesPassIncGen)
add_dependencies(mlir-headers InlineIncludesPassIncGen)
add_dependencies(LLZKDialectHeaders InlineIncludesPassIncGen)

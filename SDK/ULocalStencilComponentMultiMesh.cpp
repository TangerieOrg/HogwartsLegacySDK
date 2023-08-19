#include "FLocalStencilEffectMeshAttached.hpp"
#include "ULocalStencilComponentBase.hpp"
#include "ULocalStencilComponentMultiMesh.hpp"
ULocalStencilComponentMultiMesh* ULocalStencilComponentMultiMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilComponentMultiMesh");
    return (ULocalStencilComponentMultiMesh*)res;
}

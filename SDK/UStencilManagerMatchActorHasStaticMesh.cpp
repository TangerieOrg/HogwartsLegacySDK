#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorHasStaticMesh.hpp"
UStencilManagerMatchActorHasStaticMesh* UStencilManagerMatchActorHasStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorHasStaticMesh");
    return (UStencilManagerMatchActorHasStaticMesh*)res;
}

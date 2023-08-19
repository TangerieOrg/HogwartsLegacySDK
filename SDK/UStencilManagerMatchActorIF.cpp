#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorIF.hpp"
UStencilManagerMatchActorIF* UStencilManagerMatchActorIF::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorIF");
    return (UStencilManagerMatchActorIF*)res;
}

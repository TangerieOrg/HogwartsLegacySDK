#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorNOT.hpp"
UStencilManagerMatchActorNOT* UStencilManagerMatchActorNOT::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorNOT");
    return (UStencilManagerMatchActorNOT*)res;
}

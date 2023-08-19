#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorFalse.hpp"
UStencilManagerMatchActorFalse* UStencilManagerMatchActorFalse::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorFalse");
    return (UStencilManagerMatchActorFalse*)res;
}

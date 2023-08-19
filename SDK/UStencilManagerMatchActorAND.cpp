#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorAND.hpp"
UStencilManagerMatchActorAND* UStencilManagerMatchActorAND::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorAND");
    return (UStencilManagerMatchActorAND*)res;
}

#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorBounds.hpp"
UStencilManagerMatchActorBounds* UStencilManagerMatchActorBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorBounds");
    return (UStencilManagerMatchActorBounds*)res;
}

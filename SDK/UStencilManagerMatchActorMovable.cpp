#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorMovable.hpp"
UStencilManagerMatchActorMovable* UStencilManagerMatchActorMovable::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorMovable");
    return (UStencilManagerMatchActorMovable*)res;
}

#include "UStencilManagerMatchActorMovable.hpp"
#include "UStencilManagerMatchActorStationary.hpp"
UStencilManagerMatchActorStationary* UStencilManagerMatchActorStationary::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorStationary");
    return (UStencilManagerMatchActorStationary*)res;
}

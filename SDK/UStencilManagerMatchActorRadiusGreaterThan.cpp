#include "UStencilManagerMatchActorBounds.hpp"
#include "UStencilManagerMatchActorRadiusGreaterThan.hpp"
UStencilManagerMatchActorRadiusGreaterThan* UStencilManagerMatchActorRadiusGreaterThan::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorRadiusGreaterThan");
    return (UStencilManagerMatchActorRadiusGreaterThan*)res;
}

#include "UStencilManagerMatchActorBounds.hpp"
#include "UStencilManagerMatchActorRadiusLessThan.hpp"
UStencilManagerMatchActorRadiusLessThan* UStencilManagerMatchActorRadiusLessThan::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorRadiusLessThan");
    return (UStencilManagerMatchActorRadiusLessThan*)res;
}

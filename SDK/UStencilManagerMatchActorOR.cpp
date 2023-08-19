#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorOR.hpp"
UStencilManagerMatchActorOR* UStencilManagerMatchActorOR::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorOR");
    return (UStencilManagerMatchActorOR*)res;
}

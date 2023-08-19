#include "UStencilManagerMatchActorName.hpp"
#include "UStencilManagerMatchActorNameContains.hpp"
UStencilManagerMatchActorNameContains* UStencilManagerMatchActorNameContains::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorNameContains");
    return (UStencilManagerMatchActorNameContains*)res;
}

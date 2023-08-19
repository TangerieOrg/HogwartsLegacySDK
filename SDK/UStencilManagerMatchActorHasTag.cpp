#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorHasTag.hpp"
UStencilManagerMatchActorHasTag* UStencilManagerMatchActorHasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorHasTag");
    return (UStencilManagerMatchActorHasTag*)res;
}

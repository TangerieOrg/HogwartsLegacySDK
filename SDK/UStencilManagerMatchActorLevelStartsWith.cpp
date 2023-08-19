#include "UStencilManagerMatchActorLevelStartsWith.hpp"
#include "UStencilManagerMatchActorNameStartsWith.hpp"
UStencilManagerMatchActorLevelStartsWith* UStencilManagerMatchActorLevelStartsWith::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorLevelStartsWith");
    return (UStencilManagerMatchActorLevelStartsWith*)res;
}

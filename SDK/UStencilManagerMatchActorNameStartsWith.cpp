#include "UStencilManagerMatchActorName.hpp"
#include "UStencilManagerMatchActorNameStartsWith.hpp"
UStencilManagerMatchActorNameStartsWith* UStencilManagerMatchActorNameStartsWith::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorNameStartsWith");
    return (UStencilManagerMatchActorNameStartsWith*)res;
}

#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorTrue.hpp"
UStencilManagerMatchActorTrue* UStencilManagerMatchActorTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorTrue");
    return (UStencilManagerMatchActorTrue*)res;
}

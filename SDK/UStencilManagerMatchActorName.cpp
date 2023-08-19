#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorName.hpp"
UStencilManagerMatchActorName* UStencilManagerMatchActorName::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorName");
    return (UStencilManagerMatchActorName*)res;
}

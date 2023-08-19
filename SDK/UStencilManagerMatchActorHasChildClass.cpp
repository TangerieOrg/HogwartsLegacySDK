#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorHasChildClass.hpp"
UStencilManagerMatchActorHasChildClass* UStencilManagerMatchActorHasChildClass::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorHasChildClass");
    return (UStencilManagerMatchActorHasChildClass*)res;
}

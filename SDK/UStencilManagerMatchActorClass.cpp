#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorClass.hpp"
UStencilManagerMatchActorClass* UStencilManagerMatchActorClass::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorClass");
    return (UStencilManagerMatchActorClass*)res;
}

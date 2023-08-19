#include "UObject.hpp"
#include "UStencilManagerMatchActor.hpp"
UStencilManagerMatchActor* UStencilManagerMatchActor::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActor");
    return (UStencilManagerMatchActor*)res;
}

#include "FLocalStencilEffectMesh.hpp"
#include "ULocalStencilComponent.hpp"
#include "ULocalStencilComponentBase.hpp"
ULocalStencilComponent* ULocalStencilComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilComponent");
    return (ULocalStencilComponent*)res;
}

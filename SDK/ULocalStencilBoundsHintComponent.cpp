#include "ELocalStencilBoundsHintMode.hpp"
#include "ULocalStencilBoundsHintComponent.hpp"
#include "ULocalStencilBoundsHintComponentBase.hpp"
ULocalStencilBoundsHintComponent* ULocalStencilBoundsHintComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilBoundsHintComponent");
    return (ULocalStencilBoundsHintComponent*)res;
}

#include "ULocalStencilBoundsHintComponentBase.hpp"
#include "USceneComponent.hpp"
ULocalStencilBoundsHintComponentBase* ULocalStencilBoundsHintComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilBoundsHintComponentBase");
    return (ULocalStencilBoundsHintComponentBase*)res;
}

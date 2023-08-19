#include "ULocalStencilComponent.hpp"
#include "ULocalStencilComponentOrientCamera.hpp"
ULocalStencilComponentOrientCamera* ULocalStencilComponentOrientCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilComponentOrientCamera");
    return (ULocalStencilComponentOrientCamera*)res;
}

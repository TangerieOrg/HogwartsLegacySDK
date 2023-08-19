#include "UInterface.hpp"
#include "UStencilManagerEnableInterface.hpp"
UStencilManagerEnableInterface* UStencilManagerEnableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerEnableInterface");
    return (UStencilManagerEnableInterface*)res;
}

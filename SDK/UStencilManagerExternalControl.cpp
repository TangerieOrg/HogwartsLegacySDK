#include "UObject.hpp"
#include "UStencilManagerExternalControl.hpp"
UStencilManagerExternalControl* UStencilManagerExternalControl::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalControl");
    return (UStencilManagerExternalControl*)res;
}

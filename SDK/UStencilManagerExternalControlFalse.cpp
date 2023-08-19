#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalControlFalse.hpp"
UStencilManagerExternalControlFalse* UStencilManagerExternalControlFalse::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalControlFalse");
    return (UStencilManagerExternalControlFalse*)res;
}

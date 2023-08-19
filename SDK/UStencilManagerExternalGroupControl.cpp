#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalGroupControl.hpp"
UStencilManagerExternalGroupControl* UStencilManagerExternalGroupControl::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalGroupControl");
    return (UStencilManagerExternalGroupControl*)res;
}

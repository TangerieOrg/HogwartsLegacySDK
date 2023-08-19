#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalSystemControl.hpp"
UStencilManagerExternalSystemControl* UStencilManagerExternalSystemControl::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalSystemControl");
    return (UStencilManagerExternalSystemControl*)res;
}

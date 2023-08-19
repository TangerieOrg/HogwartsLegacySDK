#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalControlDisableHighContrast.hpp"
UStencilManagerExternalControlDisableHighContrast* UStencilManagerExternalControlDisableHighContrast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StencilManagerExternalControlDisableHighContrast");
    return (UStencilManagerExternalControlDisableHighContrast*)res;
}

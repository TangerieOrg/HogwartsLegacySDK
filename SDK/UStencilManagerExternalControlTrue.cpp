#include "UStencilManagerExternalControl.hpp"
#include "UStencilManagerExternalControlTrue.hpp"
UStencilManagerExternalControlTrue* UStencilManagerExternalControlTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerExternalControlTrue");
    return (UStencilManagerExternalControlTrue*)res;
}

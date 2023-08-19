#include "UObject.hpp"
#include "UStencilManagerDynamicLock.hpp"
UStencilManagerDynamicLock* UStencilManagerDynamicLock::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerDynamicLock");
    return (UStencilManagerDynamicLock*)res;
}

#include "FDelegateArray.hpp"
#include "UObject.hpp"
#include "UPlatformInterfaceBase.hpp"
UPlatformInterfaceBase* UPlatformInterfaceBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlatformInterfaceBase");
    return (UPlatformInterfaceBase*)res;
}

#include "ULockTargetScreenInfo.hpp"
#include "UObject.hpp"
ULockTargetScreenInfo* ULockTargetScreenInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockTargetScreenInfo");
    return (ULockTargetScreenInfo*)res;
}

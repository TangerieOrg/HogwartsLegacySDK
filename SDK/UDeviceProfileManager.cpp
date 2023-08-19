#include "UDeviceProfileManager.hpp"
#include "UObject.hpp"
UDeviceProfileManager* UDeviceProfileManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DeviceProfileManager");
    return (UDeviceProfileManager*)res;
}

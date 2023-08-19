#include "UDeviceProfileFragment.hpp"
#include "UObject.hpp"
UDeviceProfileFragment* UDeviceProfileFragment::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DeviceProfileFragment");
    return (UDeviceProfileFragment*)res;
}

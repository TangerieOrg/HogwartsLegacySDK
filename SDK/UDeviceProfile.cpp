#include "UDeviceProfile.hpp"
#include "UObject.hpp"
#include "UTextureLODSettings.hpp"
UDeviceProfile* UDeviceProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DeviceProfile");
    return (UDeviceProfile*)res;
}

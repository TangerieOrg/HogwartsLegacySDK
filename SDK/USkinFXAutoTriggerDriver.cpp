#include "UObject.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
USkinFXAutoTriggerDriver* USkinFXAutoTriggerDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXAutoTriggerDriver");
    return (USkinFXAutoTriggerDriver*)res;
}

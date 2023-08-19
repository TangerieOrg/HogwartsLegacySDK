#include "FSkinFXAutoTriggerEffectInfo.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
#include "USkinFXAutoTriggerDriverDisease.hpp"
USkinFXAutoTriggerDriverDisease* USkinFXAutoTriggerDriverDisease::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXAutoTriggerDriverDisease");
    return (USkinFXAutoTriggerDriverDisease*)res;
}

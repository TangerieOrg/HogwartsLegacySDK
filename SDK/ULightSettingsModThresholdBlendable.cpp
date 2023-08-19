#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "ULightSettingsModThreshold.hpp"
#include "ULightSettingsModThresholdBlendable.hpp"
ULightSettingsModThresholdBlendable* ULightSettingsModThresholdBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightSettingsModThresholdBlendable");
    return (ULightSettingsModThresholdBlendable*)res;
}

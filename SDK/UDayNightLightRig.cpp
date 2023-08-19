#include "FLightParameterSmoothingDiscontinuitySettings.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
#include "UDayLightRig.hpp"
#include "UDayNightExpHeightFogAdjustments.hpp"
#include "UDayNightLightRig.hpp"
#include "ULightDirectionLerpControl.hpp"
#include "ULightParameterSmoothing.hpp"
#include "ULightSettingsLerpControl.hpp"
#include "ULightSettingsModCurve.hpp"
#include "UNightLightRig.hpp"
UDayNightLightRig* UDayNightLightRig::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightLightRig");
    return (UDayNightLightRig*)res;
}

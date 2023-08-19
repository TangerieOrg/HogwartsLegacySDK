#include "EProbeNightLightMoonDirection.hpp"
#include "FDayNightLightRigOverride.hpp"
#include "FManualMoonSetup.hpp"
#include "FRotator.hpp"
#include "UDataAsset.hpp"
#include "ULightSettingsModCurve.hpp"
#include "UProbeNightLightRig.hpp"
UProbeNightLightRig* UProbeNightLightRig::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.ProbeNightLightRig");
    return (UProbeNightLightRig*)res;
}

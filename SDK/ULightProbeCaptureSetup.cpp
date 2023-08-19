#include "FLightProbeCaptureSetupComputer.hpp"
#include "UDataAsset.hpp"
#include "ULightProbeCaptureSetup.hpp"
ULightProbeCaptureSetup* ULightProbeCaptureSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightProbeCaptureSetup");
    return (ULightProbeCaptureSetup*)res;
}

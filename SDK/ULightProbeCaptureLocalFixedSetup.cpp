#include "FLightProbeCaptureSetupComputer.hpp"
#include "ULightProbeCaptureLocalFixedSetup.hpp"
#include "UWLightProbesVolumeCaptureSetup.hpp"
ULightProbeCaptureLocalFixedSetup* ULightProbeCaptureLocalFixedSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightProbeCaptureLocalFixedSetup");
    return (ULightProbeCaptureLocalFixedSetup*)res;
}

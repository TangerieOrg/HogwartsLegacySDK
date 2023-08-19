#include "ULightProbeCaptureLocalSetup.hpp"
#include "ULightProbeCaptureSetup.hpp"
#include "UWLightProbesVolumeCaptureSetup.hpp"
ULightProbeCaptureLocalSetup* ULightProbeCaptureLocalSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightProbeCaptureLocalSetup");
    return (ULightProbeCaptureLocalSetup*)res;
}

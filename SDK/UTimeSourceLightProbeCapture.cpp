#include "ULightProbeCaptureSetup.hpp"
#include "UTimeSource.hpp"
#include "UTimeSourceLightProbeCapture.hpp"
UTimeSourceLightProbeCapture* UTimeSourceLightProbeCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceLightProbeCapture");
    return (UTimeSourceLightProbeCapture*)res;
}

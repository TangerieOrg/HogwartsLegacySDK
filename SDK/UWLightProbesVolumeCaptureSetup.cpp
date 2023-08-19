#include "UObject.hpp"
#include "UWLightProbesVolumeCaptureSetup.hpp"
UWLightProbesVolumeCaptureSetup* UWLightProbesVolumeCaptureSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WLightProbesVolumeCaptureSetup");
    return (UWLightProbesVolumeCaptureSetup*)res;
}

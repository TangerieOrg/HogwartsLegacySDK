#pragma once
#include <cstdint>
#include "UWLightProbesVolumeCaptureSetup.hpp"
class ULightProbeCaptureSetup;
#pragma pack(push, 1)
class ULightProbeCaptureLocalSetup : public UWLightProbesVolumeCaptureSetup {
public:
    ULightProbeCaptureSetup* CaptureSetup; // 0x28
    static ULightProbeCaptureLocalSetup* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

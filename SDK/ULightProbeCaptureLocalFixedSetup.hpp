#pragma once
#include <cstdint>
#include "FLightProbeCaptureSetupComputer.hpp"
#include "UWLightProbesVolumeCaptureSetup.hpp"
#pragma pack(push, 1)
class ULightProbeCaptureLocalFixedSetup : public UWLightProbesVolumeCaptureSetup {
public:
    FLightProbeCaptureSetupComputer Computer; // 0x28
    static ULightProbeCaptureLocalFixedSetup* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)

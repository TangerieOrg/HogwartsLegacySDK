#pragma once
#include <cstdint>
#include "UTimeSource.hpp"
class ULightProbeCaptureSetup;
#pragma pack(push, 1)
class UTimeSourceLightProbeCapture : public UTimeSource {
public:
    ULightProbeCaptureSetup* CaptureSetup; // 0x28
    static UTimeSourceLightProbeCapture* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

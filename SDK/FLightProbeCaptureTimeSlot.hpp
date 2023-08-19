#pragma once
#include <cstdint>
#include "FLightProbeCaptureSetupComputer.hpp"
#include "FWLightProbesBlendData.hpp"
#include "FWLightProbesCaptureEvaluator.hpp"
#pragma pack(push, 1)
struct FLightProbeCaptureTimeSlot : public FWLightProbesCaptureEvaluator {
    FLightProbeCaptureSetupComputer Computer; // 0x8
    FWLightProbesBlendData ProbesBlendData; // 0x90
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)

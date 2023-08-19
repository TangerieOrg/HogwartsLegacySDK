#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlendDomainLightingMode : uint8_t {
    GameAndProbeCapture = 0,
    GameOnly = 1,
    ProbeCaptureOnly = 2,
    EBlendDomainLightingMode_MAX = 3,
};
#pragma pack(pop)

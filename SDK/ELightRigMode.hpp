#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightRigMode : uint8_t {
    GameAndProbeCapture = 0,
    GameOnly = 1,
    ProbeCaptureOnly = 2,
    ELightRigMode_MAX = 3,
};
#pragma pack(pop)

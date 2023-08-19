#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ParticleReplayState {
    PRS_Disabled = 0,
    PRS_Capturing = 1,
    PRS_Replaying = 2,
    PRS_MAX = 3,
};
#pragma pack(pop)

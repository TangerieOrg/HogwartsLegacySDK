#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectorTrackCut {
    float Time; // 0x0
    float TransitionTime; // 0x4
    FName TargetCamGroup; // 0x8
    int32_t ShotNumber; // 0x10
}; // Size: 0x14
#pragma pack(pop)

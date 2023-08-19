#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSceneRigAvaAudioStateTrackSectionData {
    FName stateGroup; // 0x0
    FName State; // 0x8
    int32_t Priority; // 0x10
}; // Size: 0x14
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSceneRigAvaAudioMusicTrackSectionData {
    FString EventName; // 0x0
    int32_t Priority; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)

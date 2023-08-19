#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSceneRigAkAudioRTPCTrackSectionData {
    FString RTPCName; // 0x0
    float RTPCValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)

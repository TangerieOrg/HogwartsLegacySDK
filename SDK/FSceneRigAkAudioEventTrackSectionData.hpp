#pragma once
#include <cstdint>
class UAkAudioEvent;
#pragma pack(push, 1)
struct FSceneRigAkAudioEventTrackSectionData {
    UAkAudioEvent* Event; // 0x0
    bool RetriggerEvent; // 0x8
    bool StopAtSectionEnd; // 0x9
    char pad_a[0x2];
    float MaxSourceDuration; // 0xc
    FString EventName; // 0x10
}; // Size: 0x20
#pragma pack(pop)

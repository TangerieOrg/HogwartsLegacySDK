#pragma once
#include <cstdint>
class UAvaAudioDialogueEvent;
#pragma pack(push, 1)
struct FAvaDialogueTrackSectionData {
    UAvaAudioDialogueEvent* Event; // 0x0
    FString EventName; // 0x8
    char pad_18[0x50];
    bool StopWhenAttachedToDestroyed; // 0x68
    uint8_t flags; // 0x69
    char pad_6a[0x6];
}; // Size: 0x70
#pragma pack(pop)

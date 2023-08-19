#pragma once
#include <cstdint>
class UAkAudioEvent;
#pragma pack(push, 1)
struct FAudioMultiSourceAudioEvent {
    UAkAudioEvent* AkAudioEvent; // 0x0
    FString EventName; // 0x8
}; // Size: 0x18
#pragma pack(pop)

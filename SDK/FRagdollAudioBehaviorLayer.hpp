#pragma once
#include <cstdint>
class URagdollAudioBehavior;
#pragma pack(push, 1)
struct FRagdollAudioBehaviorLayer {
    FName LayerName; // 0x0
    TArray<URagdollAudioBehavior*> AudioBehaviors; // 0x8
}; // Size: 0x18
#pragma pack(pop)

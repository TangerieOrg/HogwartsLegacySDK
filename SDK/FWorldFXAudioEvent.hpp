#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FWorldFXAudioEventExtra.hpp"
#include "FWorldFXCullDistance.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FWorldFXAudioEvent {
    UAkAudioEvent* SFXEvent; // 0x0
    FName EventName; // 0x8
    FWorldFXCullDistance CullDistance; // 0x10
    FVector Offset; // 0x18
    FVector Scale; // 0x24
    FWorldFXAudioEventExtra Extra; // 0x30
    bool bNonSpatialized; // 0x58
    char pad_59[0x7];
}; // Size: 0x60
#pragma pack(pop)

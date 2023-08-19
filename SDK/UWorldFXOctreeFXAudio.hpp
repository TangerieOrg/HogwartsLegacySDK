#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXAudioEventExtra.hpp"
#include "UWorldFXOctreeFX.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UWorldFXOctreeFXAudio : public UWorldFXOctreeFX {
public:
    UAkAudioEvent* SFXEvent; // 0x50
    FName EventName; // 0x58
    char pad_60[0x8];
    FVector Position; // 0x68
    FRotator Rotator; // 0x74
    FVector Scale; // 0x80
    char pad_8c[0x4];
    FWorldFXAudioEventExtra Extra; // 0x90
    FName UniqueAttachTag; // 0xb8
    static UWorldFXOctreeFXAudio* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

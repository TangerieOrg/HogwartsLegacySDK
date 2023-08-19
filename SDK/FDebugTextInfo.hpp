#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
class AActor;
class UFont;
#pragma pack(push, 1)
struct FDebugTextInfo {
    AActor* SrcActor; // 0x0
    FVector SrcActorOffset; // 0x8
    FVector SrcActorDesiredOffset; // 0x14
    FString DebugText; // 0x20
    float TimeRemaining; // 0x30
    float Duration; // 0x34
    FColor TextColor; // 0x38
    uint8_t bAbsoluteLocation : 1; // 0x3c
    uint8_t bKeepAttachedToActor : 1; // 0x3c
    uint8_t bDrawShadow : 1; // 0x3c
    uint8_t pad_bitfield_3c_3 : 5;
    char pad_3d[0x3];
    FVector OrigActorLocation; // 0x40
    char pad_4c[0x4];
    UFont* Font; // 0x50
    float FontScale; // 0x58
    char pad_5c[0x4];
}; // Size: 0x60
#pragma pack(pop)

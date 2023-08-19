#pragma once
#include <cstdint>
#include "EMultiFXLoc.hpp"
#include "EMultiPlusRepeat.hpp"
#include "FMultiFX.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMultiFXPlus : public FMultiFX {
    EMultiFXLoc PlacementMode; // 0x30
    char pad_31[0x3];
    int32_t MaxBoneFX; // 0x34
    TArray<FName> AttachBoneList; // 0x38
    FVector VfxOffset; // 0x48
    FVector VfxScale; // 0x54
    float DurationLimit; // 0x60
    float SecondsBetweenSpawns; // 0x64
    uint8_t bOnCharacters : 1; // 0x68
    uint8_t bOnNonMovable : 1; // 0x68
    uint8_t bOnNonActors : 1; // 0x68
    uint8_t EndWhenMovementStops : 1; // 0x68
    uint8_t pad_bitfield_68_4 : 4;
    EMultiPlusRepeat RepeatMode; // 0x69
    char pad_6a[0x6];
}; // Size: 0x70
#pragma pack(pop)

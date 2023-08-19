#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class UClass;
class UAnimSequence;
class APawn;
#pragma pack(push, 1)
struct FCameraPreviewInfo {
    UClass* PawnClass; // 0x0
    UAnimSequence* AnimSeq; // 0x8
    FVector Location; // 0x10
    FRotator Rotation; // 0x1c
    APawn* PawnInst; // 0x28
}; // Size: 0x30
#pragma pack(pop)

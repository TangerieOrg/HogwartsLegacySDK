#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDropNoteInfo {
    FVector Location; // 0x0
    FRotator Rotation; // 0xc
    FString Comment; // 0x18
}; // Size: 0x28
#pragma pack(pop)

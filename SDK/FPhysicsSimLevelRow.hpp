#pragma once
#include <cstdint>
#include "EPhysicsSimLevelType.hpp"
#include "FRotator.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPhysicsSimLevelRow : public FTableRowBase {
    EPhysicsSimLevelType Type; // 0x8
    char pad_9[0x2f];
    FVector Location; // 0x38
    FRotator Rotation; // 0x44
    bool bIsPlayerControlled; // 0x50
    char pad_51[0x7];
}; // Size: 0x58
#pragma pack(pop)

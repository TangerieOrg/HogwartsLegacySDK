#pragma once
#include <cstdint>
#include "EDrawDebugItemType\Type.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FQueuedDrawDebugItem {
    EDrawDebugItemType::Type ItemType; // 0x0
    char pad_1[0x3];
    FVector StartLoc; // 0x4
    FVector EndLoc; // 0x10
    FVector Center; // 0x1c
    FRotator Rotation; // 0x28
    float Radius; // 0x34
    float Size; // 0x38
    int32_t Segments; // 0x3c
    FColor Color; // 0x40
    bool bPersistentLines; // 0x44
    char pad_45[0x3];
    float LifeTime; // 0x48
    float Thickness; // 0x4c
    FString Message; // 0x50
    FVector2D TextScale; // 0x60
}; // Size: 0x68
#pragma pack(pop)

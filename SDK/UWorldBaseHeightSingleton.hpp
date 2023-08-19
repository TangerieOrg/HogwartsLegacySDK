#pragma once
#include <cstdint>
#include "FWorldBaseHeights.hpp"
#include "FWorldBaseHeightsTracker.hpp"
#include "UObject.hpp"
class UWorld;
#pragma pack(push, 1)
class UWorldBaseHeightSingleton : public UObject {
public:
    FWorldBaseHeights Base; // 0x28
    FWorldBaseHeightsTracker Offsets; // 0x34
    FWorldBaseHeights Final; // 0x44
    int32_t UpdateDisable; // 0x50
    char pad_54[0x4];
    UWorld* OwningWorld; // 0x58
    char pad_60[0x30];
    TArray<void*> BaseOverrides; // 0x90
    TArray<void*> BaseHeightObjects; // 0xa0
    static UWorldBaseHeightSingleton* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)

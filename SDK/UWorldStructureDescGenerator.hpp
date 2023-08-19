#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorld;
#pragma pack(push, 1)
class UWorldStructureDescGenerator : public UObject {
public:
    char pad_28[0x1a0];
    TArray<UWorld*> PendingParses; // 0x1c8
    static UWorldStructureDescGenerator* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)

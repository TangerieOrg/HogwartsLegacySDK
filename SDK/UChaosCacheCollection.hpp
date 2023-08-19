#pragma once
#include <cstdint>
#include "UObject.hpp"
class UChaosCache;
#pragma pack(push, 1)
class UChaosCacheCollection : public UObject {
public:
    TArray<UChaosCache*> Caches; // 0x28
    static UChaosCacheCollection* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

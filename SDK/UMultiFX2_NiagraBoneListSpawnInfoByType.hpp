#pragma once
#include <cstdint>
#include "UMultiFX2_NiagraBoneListSpawnInfo.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraBoneListSpawnInfoByType : public UMultiFX2_NiagraBoneListSpawnInfo {
public:
    char pad_50[0x50];
    static UMultiFX2_NiagraBoneListSpawnInfoByType* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

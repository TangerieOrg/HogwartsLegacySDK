#pragma once
#include <cstdint>
#include "FRigInfluenceMap.hpp"
#pragma pack(push, 1)
struct FRigInfluenceMapPerEvent {
    TArray<FRigInfluenceMap> Maps; // 0x0
    char pad_10[0x50];
}; // Size: 0x60
#pragma pack(pop)

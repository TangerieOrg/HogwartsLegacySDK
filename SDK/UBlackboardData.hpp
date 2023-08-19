#pragma once
#include <cstdint>
#include "FBlackboardEntry.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UBlackboardData : public UDataAsset {
public:
    UBlackboardData* Parent; // 0x30
    TArray<FBlackboardEntry> Keys; // 0x38
    uint8_t bHasSynchronizedKeys : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    static UBlackboardData* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

#pragma once
#include <cstdint>
class UBlackboardKeyType;
#pragma pack(push, 1)
struct FBlackboardEntry {
    FName EntryName; // 0x0
    UBlackboardKeyType* KeyType; // 0x8
    uint8_t bInstanceSynced : 1; // 0x10
    uint8_t pad_bitfield_10_1 : 7;
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)

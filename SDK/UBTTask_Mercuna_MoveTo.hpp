#pragma once
#include <cstdint>
#include "UBTTask_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTTask_Mercuna_MoveTo : public UBTTask_BlackboardBase {
public:
    float Speed; // 0x98
    float EndDistance; // 0x9c
    uint8_t bObserveBlackboardValue : 1; // 0xa0
    uint8_t bAllowPartialPath : 1; // 0xa0
    uint8_t pad_bitfield_a0_2 : 6;
    char pad_a1[0x7];
    static UBTTask_Mercuna_MoveTo* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

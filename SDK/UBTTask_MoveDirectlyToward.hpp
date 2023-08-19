#pragma once
#include <cstdint>
#include "UBTTask_MoveTo.hpp"
#pragma pack(push, 1)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {
public:
    uint8_t bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
    uint8_t bProjectVectorGoalToNavigation : 1; // 0xb0
    uint8_t bUpdatedDeprecatedProperties : 1; // 0xb0
    uint8_t pad_bitfield_b0_3 : 5;
    char pad_b1[0x7];
    static UBTTask_MoveDirectlyToward* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_GetDirectionBetween : public UBTTaskNode {
public:
    FBlackboardKeySelector FromLocationKey; // 0x70
    FBlackboardKeySelector ToLocationKey; // 0x98
    FBlackboardKeySelector ResultDirectionKey; // 0xc0
    bool b2D; // 0xe8
    char pad_e9[0x7];
    static UBTTask_GetDirectionBetween* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)

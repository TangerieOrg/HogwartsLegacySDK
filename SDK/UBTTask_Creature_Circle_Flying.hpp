#pragma once
#include <cstdint>
#include "ECirclingDirection.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_Circle_Flying : public UBTTaskNode {
public:
    FBlackboardKeySelector CircleCenterKey; // 0x70
    FBlackboardKeySelector CircleRadiusKey; // 0x98
    float Height; // 0xc0
    float HeightRandomDeviation; // 0xc4
    ECirclingDirection Direction; // 0xc8
    char pad_c9[0x67];
    static UBTTask_Creature_Circle_Flying* StaticClass();
}; // Size: 0x130
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_MakeNoise : public UBTTaskNode {
public:
    float Loudnes; // 0x70
    char pad_74[0x4];
    static UBTTask_MakeNoise* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

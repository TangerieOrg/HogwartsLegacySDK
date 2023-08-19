#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Wait : public UBTTaskNode {
public:
    float WaitTime; // 0x70
    float RandomDeviation; // 0x74
    static UBTTask_Wait* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

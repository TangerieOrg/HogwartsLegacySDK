#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTask_Wait.hpp"
#pragma pack(push, 1)
class UBTTask_WaitBlackboardTimeWithDeviation : public UBTTask_Wait {
public:
    FBlackboardKeySelector BlackboardKey; // 0x78
    float Deviation; // 0xa0
    char pad_a4[0x4];
    static UBTTask_WaitBlackboardTimeWithDeviation* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

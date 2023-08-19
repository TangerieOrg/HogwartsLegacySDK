#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTask_Wait.hpp"
#pragma pack(push, 1)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait {
public:
    FBlackboardKeySelector BlackboardKey; // 0x78
    static UBTTask_WaitBlackboardTime* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

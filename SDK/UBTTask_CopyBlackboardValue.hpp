#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_CopyBlackboardValue : public UBTTaskNode {
public:
    FBlackboardKeySelector FromKey; // 0x70
    FBlackboardKeySelector ToKey; // 0x98
    static UBTTask_CopyBlackboardValue* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

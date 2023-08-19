#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_SetBlackboardValue : public UBTTaskNode {
public:
    FBlackboardKeySelector Key; // 0x70
    static UBTTask_SetBlackboardValue* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

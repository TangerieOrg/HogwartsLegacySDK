#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_BlackboardBase : public UBTTaskNode {
public:
    FBlackboardKeySelector BlackboardKey; // 0x70
    static UBTTask_BlackboardBase* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

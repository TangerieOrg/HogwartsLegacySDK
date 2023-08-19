#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_ArrivedAtPathNode : public UBTTaskNode {
public:
    FBlackboardKeySelector PathNodeKey; // 0x70
    static UBTTask_Creature_ArrivedAtPathNode* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

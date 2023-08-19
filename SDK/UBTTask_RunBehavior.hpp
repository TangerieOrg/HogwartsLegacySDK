#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
class UBehaviorTree;
#pragma pack(push, 1)
class UBTTask_RunBehavior : public UBTTaskNode {
public:
    UBehaviorTree* BehaviorAsset; // 0x70
    static UBTTask_RunBehavior* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

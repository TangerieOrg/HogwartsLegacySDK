#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_WaitUntilStationary : public UBTTaskNode {
public:
    bool bAllowAnimationTransition; // 0x70
    bool bAllowIdleVariation; // 0x71
    char pad_72[0x6];
    static UBTTask_Creature_WaitUntilStationary* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

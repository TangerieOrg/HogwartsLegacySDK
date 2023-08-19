#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_GameplayTaskBase : public UBTTaskNode {
public:
    uint8_t bWaitForGameplayTask : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x7];
    static UBTTask_GameplayTaskBase* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

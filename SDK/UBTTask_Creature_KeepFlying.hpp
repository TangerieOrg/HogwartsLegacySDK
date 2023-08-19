#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_KeepFlying : public UBTTaskNode {
public:
    char pad_70[0x28];
    static UBTTask_Creature_KeepFlying* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

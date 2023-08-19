#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_Takeoff : public UBTTaskNode {
public:
    char pad_70[0x18];
    static UBTTask_Creature_Takeoff* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

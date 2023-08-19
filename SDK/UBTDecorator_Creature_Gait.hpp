#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_Creature_Gait : public UBTDecorator {
public:
    char pad_68[0x50];
    bool bAllowGaitTransition; // 0xb8
    char pad_b9[0x7];
    static UBTDecorator_Creature_Gait* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

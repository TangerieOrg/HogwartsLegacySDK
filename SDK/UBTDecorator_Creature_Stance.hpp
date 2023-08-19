#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_Creature_Stance : public UBTDecorator {
public:
    char pad_68[0x50];
    bool bAllowStanceTransition; // 0xb8
    bool bAllowIdleVariation; // 0xb9
    char pad_ba[0x6];
    static UBTDecorator_Creature_Stance* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

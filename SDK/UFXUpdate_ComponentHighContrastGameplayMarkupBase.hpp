#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_ComponentHighContrastGameplayMarkupBase : public UFXUpdate_Tick {
public:
    bool bOnce; // 0x80
    char pad_81[0x7];
    static UFXUpdate_ComponentHighContrastGameplayMarkupBase* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

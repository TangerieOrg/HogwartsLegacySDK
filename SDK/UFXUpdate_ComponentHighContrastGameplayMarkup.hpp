#pragma once
#include <cstdint>
#include "EHighContrastGameplayMarkup.hpp"
#include "UFXUpdate_ComponentHighContrastGameplayMarkupBase.hpp"
#pragma pack(push, 1)
class UFXUpdate_ComponentHighContrastGameplayMarkup : public UFXUpdate_ComponentHighContrastGameplayMarkupBase {
public:
    EHighContrastGameplayMarkup StencilValue; // 0x88
    char pad_89[0x7];
    static UFXUpdate_ComponentHighContrastGameplayMarkup* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

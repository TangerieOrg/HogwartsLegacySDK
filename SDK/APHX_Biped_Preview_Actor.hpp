#pragma once
#include <cstdint>
#include "ABiped_Character.hpp"
class UCustomizableCharacterComponent;
#pragma pack(push, 1)
class APHX_Biped_Preview_Actor : public ABiped_Character {
public:
    UCustomizableCharacterComponent* Customization; // 0x1a70
    char pad_1a78[0x8];
    static APHX_Biped_Preview_Actor* StaticClass();
}; // Size: 0x1a80
#pragma pack(pop)

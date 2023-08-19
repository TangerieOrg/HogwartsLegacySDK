#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
class UBipedStateComponent;
class UAnimationComponent;
class UCustomizableCharacterComponent;
class UFacialComponent;
#pragma pack(push, 1)
class ADB_Character : public ABase_Character {
public:
    UCustomizableCharacterComponent* Customization; // 0x1660
    UFacialComponent* FacialComponent; // 0x1668
    UAnimationComponent* AnimationComponent; // 0x1670
    char pad_1678[0x8];
    static ADB_Character* StaticClass();
}; // Size: 0x1680
#pragma pack(pop)

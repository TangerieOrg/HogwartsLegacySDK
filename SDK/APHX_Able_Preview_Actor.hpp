#pragma once
#include <cstdint>
#include "AAmbulatory_Character.hpp"
class UCustomizableCharacterComponent;
class UBipedStateComponent;
#pragma pack(push, 1)
class APHX_Able_Preview_Actor : public AAmbulatory_Character {
public:
    UCustomizableCharacterComponent* Customization; // 0xcc0
    UBipedStateComponent* ObjectStateComponent; // 0xcc8
    static APHX_Able_Preview_Actor* StaticClass();
}; // Size: 0xcd0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
class UCharacterStateComponent;
#pragma pack(push, 1)
class ADialogueCharacter : public ABase_Character {
public:
    static ADialogueCharacter* StaticClass();
}; // Size: 0x1660
#pragma pack(pop)

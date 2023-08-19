#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class UCameraStackBehaviorJumpLag : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x40];
    static UCameraStackBehaviorJumpLag* StaticClass();
    void OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated);
}; // Size: 0x1f8
#pragma pack(pop)

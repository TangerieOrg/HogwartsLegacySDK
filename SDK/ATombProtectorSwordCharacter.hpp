#pragma once
#include <cstdint>
#include "AAmbulatory_Character.hpp"
class AActor;
#pragma pack(push, 1)
class ATombProtectorSwordCharacter : public AAmbulatory_Character {
public:
    AActor* TombProtector; // 0xcc0
    AActor* Player; // 0xcc8
    static ATombProtectorSwordCharacter* StaticClass();
}; // Size: 0xcd0
#pragma pack(pop)

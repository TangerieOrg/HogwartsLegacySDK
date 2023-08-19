#pragma once
#include <cstdint>
#include "FNavAgent.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#pragma pack(push, 1)
class UNonCombat_MovementComponent : public UAmbulatory_MovementComponent {
public:
    char pad_fb0[0x8];
    FNavAgent NavAgent; // 0xfb8
    static UNonCombat_MovementComponent* StaticClass();
}; // Size: 0xfc0
#pragma pack(pop)

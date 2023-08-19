#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ADraingingDraughtOrb : public AMunitionType_SubsonicSpell {
public:
    float m_CurActiveRotation; // 0x538
    FVector m_CurRotAxis; // 0x53c
    float m_AttackingDistance; // 0x548
    float m_AttackingAcceleration; // 0x54c
    float m_AttackingSpeed; // 0x550
    char pad_554[0x4];
    static ADraingingDraughtOrb* StaticClass();
    void Attack();
}; // Size: 0x558
#pragma pack(pop)

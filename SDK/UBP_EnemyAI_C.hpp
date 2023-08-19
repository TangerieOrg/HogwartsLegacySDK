#pragma once
#include <cstdint>
#include "UEnemyAIComponent.hpp"
#pragma pack(push, 1)
class UBP_EnemyAI_C : public UEnemyAIComponent {
public:
    static UBP_EnemyAI_C* StaticClass();
    void HitGround_Imp();
    void LeaveGround_Imp();
}; // Size: 0x3920
#pragma pack(pop)

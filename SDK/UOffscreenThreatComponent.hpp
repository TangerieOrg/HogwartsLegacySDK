#pragma once
#include <cstdint>
#include "EEnemy_AttackThreatState.hpp"
#include "UWidgetComponent.hpp"
#pragma pack(push, 1)
class UOffscreenThreatComponent : public UWidgetComponent {
public:
    int32_t PointerIndex; // 0x5d0
    char pad_5d4[0xc];
    static UOffscreenThreatComponent* StaticClass();
    void SetAttackState(EEnemy_AttackThreatState AttackState);
}; // Size: 0x5e0
#pragma pack(pop)

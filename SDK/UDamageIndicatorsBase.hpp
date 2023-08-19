#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
struct FVector2D;
#pragma pack(push, 1)
class UDamageIndicatorsBase : public UHUDElementGroup {
public:
    static UDamageIndicatorsBase* StaticClass();
    void OnNPC_Damaged(FVector2D& ScreenPos, float Damage, bool IsVulnerableDamage);
}; // Size: 0x2e8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UMultiFX2Asset;
#pragma pack(push, 1)
class UEnemyHiddenTeleportAttackComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    UMultiFX2Asset* TargetLocationFxAsset; // 0xd0
    char pad_d8[0x8];
    static UEnemyHiddenTeleportAttackComponent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)

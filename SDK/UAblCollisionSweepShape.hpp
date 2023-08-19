#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAblCollisionSweepShape : public UObject {
public:
    FAblAbilityTargetTypeLocation m_SweepLocation; // 0x28
    ECollisionChannel m_CollisionChannel; // 0x50
    bool m_OnlyReturnBlockingHit; // 0x51
    bool m_UseAsyncQuery; // 0x52
    char pad_53[0x5];
    static UAblCollisionSweepShape* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

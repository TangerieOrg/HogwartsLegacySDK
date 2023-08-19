#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAblCollisionShape : public UObject {
public:
    FAblAbilityTargetTypeLocation m_QueryLocation; // 0x28
    ECollisionChannel m_CollisionChannel; // 0x50
    bool m_UseAsyncQuery; // 0x51
    char pad_52[0x6];
    static UAblCollisionShape* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

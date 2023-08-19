#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UObject.hpp"
class UAblAbilityTargetingFilter;
#pragma pack(push, 1)
class UAblTargetingBase : public UObject {
public:
    bool m_AutoCalculateRange; // 0x28
    char pad_29[0x3];
    float m_Range; // 0x2c
    bool m_CalculateAs2DRange; // 0x30
    char pad_31[0x3];
    FAblAbilityTargetTypeLocation m_Location; // 0x34
    ECollisionChannel m_CollisionChannel; // 0x5c
    char pad_5d[0x3];
    TArray<UAblAbilityTargetingFilter*> m_Filters; // 0x60
    bool m_UseAsync; // 0x70
    char pad_71[0x7];
    static UAblTargetingBase* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

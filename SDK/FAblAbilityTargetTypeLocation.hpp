#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAblAbilityTargetTypeLocation {
    EAblAbilityTargetType m_Source; // 0x0
    char pad_1[0x3];
    FVector m_Offset; // 0x4
    FRotator m_Rotation; // 0x10
    FName m_Socket; // 0x1c
    bool m_UseSocketRotation; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)

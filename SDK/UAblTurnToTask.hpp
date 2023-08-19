#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "FAlphaBlend.hpp"
#include "FRotator.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblTurnToTask : public UAblAbilityTask {
public:
    EAblAbilityTargetType m_RotationTarget; // 0x70
    bool m_TrackTarget; // 0x71
    char pad_72[0x2];
    FRotator m_RotationOffset; // 0x74
    bool m_SetYaw; // 0x80
    bool m_SetPitch; // 0x81
    char pad_82[0x6];
    FAlphaBlend m_Blend; // 0x88
    static UAblTurnToTask* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)

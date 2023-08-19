#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UTurnAdjust_TargetDirectionGetter;
#pragma pack(push, 1)
class UablTurnAdjustTask : public UAblAbilityTask {
public:
    float m_MaxAdjustAngle; // 0x70
    bool m_TrackTarget; // 0x74
    char pad_75[0x3];
    FAlphaBlend m_Blend; // 0x78
    UTurnAdjust_TargetDirectionGetter* m_TargetDirectionGetter; // 0xa8
    float m_YawOffset; // 0xb0
    bool m_bOverrideRootMotionLookAheadTime; // 0xb4
    char pad_b5[0x3];
    float m_RootMotionLookAheadTime; // 0xb8
    bool m_bUseTaskEndTime; // 0xbc
    bool bGuaranteeOnTargetAtTaskEnd; // 0xbd
    bool m_bDebugDraw; // 0xbe
    char pad_bf[0x1];
    static UablTurnAdjustTask* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

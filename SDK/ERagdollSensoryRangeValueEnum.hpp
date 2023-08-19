#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollSensoryRangeValueEnum : uint8_t {
    RSRVE_HeightAboveGround = 0,
    RSRVE_Velocity = 1,
    RSRVE_HorizontalVelocity = 2,
    RSRVE_VerticalVelocity = 3,
    RSRVE_TotalTimeRagdolling = 4,
    RSRVE_TimeOnGround = 5,
    RSRVE_TimeInAir = 6,
    RSRVE_TimeHovering = 7,
    RSRVE_TimeGetupObstructed = 8,
    RSRVE_TimeInCurBehavior = 9,
    RSRVE_TimeDead = 10,
    RSRVE_TimeToImminentCollision = 11,
    RSRVE_TimeInCurAudioBehavior = 12,
    RSRVE_LastNavmeshSeperation = 13,
    RSRVE_MAX = 14,
};
#pragma pack(pop)

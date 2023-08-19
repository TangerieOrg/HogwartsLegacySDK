#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollSensoryStatusValueEnum : uint8_t {
    RSSVE_OnGround = 0,
    RSSVE_InAir = 1,
    RSSVE_Hovering = 2,
    RSSVE_Dead = 3,
    RSSVE_GetupObstructed = 4,
    RSSVE_NearDeathKneeling = 5,
    RSSVE_Frozen = 6,
    RSSVE_OnFire = 7,
    RSSVE_Charred = 8,
    RSSVE_Petrified = 9,
    RSSVE_Resurrecting = 10,
    RSSVE_MAX = 11,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FInstancedTrailMemberScale.hpp"
#include "FInstancedTrailMemberSpawnLerp.hpp"
#include "FInstancedTrailMemberSpin.hpp"
#include "FInstancedTrailMemberVelocity.hpp"
#include "FInstancedTrailPlacement.hpp"
#pragma pack(push, 1)
struct FInstancedTrailMemberBehavior {
    FInstancedTrailPlacement Placement; // 0x0
    char pad_44[0x4];
    FInstancedTrailMemberScale Scale; // 0x48
    FInstancedTrailMemberSpawnLerp SpawnLerp; // 0xe0
    bool bUseSpawnLerp; // 0x180
    char pad_181[0x3];
    FInstancedTrailMemberSpin Spin; // 0x184
    bool bUseSpin; // 0x1b8
    char pad_1b9[0x3];
    FInstancedTrailMemberVelocity Velocity; // 0x1bc
    bool bUseVelocity; // 0x1dc
    char pad_1dd[0x3];
}; // Size: 0x1e0
#pragma pack(pop)

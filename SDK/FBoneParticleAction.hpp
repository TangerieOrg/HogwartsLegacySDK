#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FBoneParticleAction {
    Activate = 0,
    Deactivate = 1,
    Destroy = 2,
    FBoneParticleAction_MAX = 3,
};
#pragma pack(pop)

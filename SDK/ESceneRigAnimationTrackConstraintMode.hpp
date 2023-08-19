#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigAnimationTrackConstraintMode : uint8_t {
    ConstrainComponent = 0,
    ConstrainActor = 1,
    ESceneRigAnimationTrackConstraintMode_MAX = 2,
};
#pragma pack(pop)

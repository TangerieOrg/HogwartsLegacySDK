#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERestoreFade {
    Never = 0,
    EndOfAction = 1,
    EndOfSceneRig = 2,
    ERestoreFade_MAX = 3,
};
#pragma pack(pop)

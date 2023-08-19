#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_PlaySceneRigInitializeType : int8_t {
    OnStartOfSceneRig = 0,
    OnStartOfAction = 1,
    ESceneAction_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigStageRoleType : int8_t {
    NONE = 0,
    Foreground = 1,
    Background = 2,
    Extra = 3,
    Prop = 4,
    ESceneRigStageRoleType_MAX = 5,
};
#pragma pack(pop)

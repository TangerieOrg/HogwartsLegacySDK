#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigCameraAttachment : int8_t {
    Stage_Root = 0,
    Avatar_Head = 1,
    A1_Head = 2,
    A2_Head = 3,
    B1_Head = 4,
    B2_Head = 5,
    ESceneRigCameraAttachment_MAX = 6,
};
#pragma pack(pop)

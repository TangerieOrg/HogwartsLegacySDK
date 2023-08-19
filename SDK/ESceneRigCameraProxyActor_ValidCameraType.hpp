#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigCameraProxyActor_ValidCameraType : uint8_t {
    CheckObstructions = 0,
    AlwaysValid = 1,
    AlwaysInValid = 2,
    ESceneRigCameraProxyActor_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_CameraResetType : uint8_t {
    NoReset = 0,
    BehindAvatar = 1,
    CurrentCameraDirection = 2,
    CurrentCameraYawAndDefaultPitch = 3,
    LookAtLocation = 4,
    ESceneAction_MAX = 5,
};
#pragma pack(pop)

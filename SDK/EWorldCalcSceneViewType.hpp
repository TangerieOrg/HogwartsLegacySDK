#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWorldCalcSceneViewType : uint8_t {
    Player = 0,
    UMG = 1,
    Editor = 2,
    TimeRigEditor = 3,
    SceneCapture = 4,
    ProbeCapture = 5,
    ReflectionCapture = 6,
    EWorldCalcSceneViewType_MAX = 7,
};
#pragma pack(pop)

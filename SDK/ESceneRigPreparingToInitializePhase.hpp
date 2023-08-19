#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigPreparingToInitializePhase {
    Uninitialized = 0,
    WorldTransitioning = 1,
    RequestingRequiredLevels = 2,
    LoadingRequiredLevels = 3,
    WaitingToCompleteStreaming = 4,
    PreparedToInitialize = 5,
    ESceneRigPreparingToInitializePhase_MAX = 6,
};
#pragma pack(pop)

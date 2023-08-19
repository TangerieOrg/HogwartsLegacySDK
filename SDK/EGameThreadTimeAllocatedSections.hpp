#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameThreadTimeAllocatedSections {
    GarbageCollection = 0,
    UpdateLevelStreaming = 1,
    RenderAssetStreaming = 2,
    AddToWorld = 3,
    AsyncLoading = 4,
    RemoveFromWorld = 5,
    GameThreadTaskScheduler = 6,
    Max = 7,
};
#pragma pack(pop)

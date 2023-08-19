#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAsyncAssetLoadState {
    ASSETLOAD_NOT_REQUESTED = 0,
    ASSETLOAD_IN_PROGRESS = 1,
    ASSETLOAD_COMPLETED = 2,
    ASSETLOAD_MAX_STATES = 3,
    ASSETLOAD_MAX = 4,
};
#pragma pack(pop)

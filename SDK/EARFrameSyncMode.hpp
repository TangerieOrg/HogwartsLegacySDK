#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARFrameSyncMode : uint8_t {
    SyncTickWithCameraImage = 0,
    SyncTickWithoutCameraImage = 1,
    EARFrameSyncMode_MAX = 2,
};
#pragma pack(pop)

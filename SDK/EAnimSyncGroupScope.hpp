#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimSyncGroupScope : uint8_t {
    Local = 0,
    Component = 1,
    EAnimSyncGroupScope_MAX = 2,
};
#pragma pack(pop)

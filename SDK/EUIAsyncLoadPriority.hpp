#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIAsyncLoadPriority : uint8_t {
    LoadingPriority_Low = 0,
    LoadingPriority_Normal = 1,
    LoadingPriority_AboveNormal = 2,
    LoadingPriority_High = 3,
    LoadingPriority_Critical = 4,
    LoadingPriority_MAX = 5,
};
#pragma pack(pop)

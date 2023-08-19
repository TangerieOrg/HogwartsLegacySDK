#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHandleSourcesMethod : uint8_t {
    DeleteSources = 0,
    HideSources = 1,
    KeepSources = 2,
    EHandleSourcesMethod_MAX = 3,
};
#pragma pack(pop)

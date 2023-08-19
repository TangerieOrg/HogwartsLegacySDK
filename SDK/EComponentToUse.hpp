#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EComponentToUse : uint8_t {
    RootComponent = 0,
    FirstFoundMesh = 1,
    EComponentToUse_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayContainerMatchType : uint8_t {
    Any = 0,
    All = 1,
    EGameplayContainerMatchType_MAX = 2,
};
#pragma pack(pop)

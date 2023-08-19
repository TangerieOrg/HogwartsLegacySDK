#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblAbilityTaskRealm : uint8_t {
    Client = 0,
    Server = 1,
    ClientAndServer = 2,
    TotalRealms = 3,
    EAblAbilityTaskRealm_MAX = 4,
};
#pragma pack(pop)

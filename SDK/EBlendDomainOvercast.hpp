#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlendDomainOvercast : uint8_t {
    ClearAndOvercast = 0,
    ClearOnly = 1,
    OvercastOnly = 2,
    EBlendDomainOvercast_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkAcousticPortalState : uint8_t {
    Closed = 0,
    Open = 1,
    AkAcousticPortalState_MAX = 2,
};
#pragma pack(pop)

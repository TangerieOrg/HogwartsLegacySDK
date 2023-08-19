#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EExternalActorRole : int8_t {
    NONE = 0,
    Foreground = 1,
    Background = 2,
    Extra = 3,
    EExternalActorRole_MAX = 4,
};
#pragma pack(pop)

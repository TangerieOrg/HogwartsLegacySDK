#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGfeSDKPermission : uint8_t {
    Granted = 0,
    Denied = 1,
    MustAsk = 2,
    Unknown = 3,
    MAX = 4,
};
#pragma pack(pop)

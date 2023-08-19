#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERTPCValueType : uint8_t {
    Default = 0,
    Global = 1,
    GameObject = 2,
    PlayingID = 3,
    Unavailable = 4,
    ERTPCValueType_MAX = 5,
};
#pragma pack(pop)

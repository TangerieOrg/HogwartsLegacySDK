#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESpringMode : uint8_t {
    ESpringMode_Chain = 0,
    ESpringMode_Emitter = 1,
    ESpringMode_MAX = 2,
};
#pragma pack(pop)

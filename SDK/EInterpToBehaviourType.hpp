#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInterpToBehaviourType : uint8_t {
    OneShot = 0,
    OneShot_Reverse = 1,
    Loop_Reset = 2,
    PingPong = 3,
    EInterpToBehaviourType_MAX = 4,
};
#pragma pack(pop)

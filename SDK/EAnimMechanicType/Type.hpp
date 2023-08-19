#pragma once
#include <cstdint>
namespace EAnimMechanicType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Undetermined = 0,
    Idle = 1,
    TurnStart = 2,
    MoveFwdLoop = 3,
    TurnStop = 4,
    Pivot = 5,
    ShortStep = 6,
    TurnInPlace = 7,
    StrafeStart = 8,
    StrafeLoop = 9,
    StrafeStop = 10,
    Jump = 11,
    Land = 12,
    EAnimMechanicType_MAX = 13,
};
#pragma pack(pop)
}

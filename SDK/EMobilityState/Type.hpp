#pragma once
#include <cstdint>
namespace EMobilityState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Combat = 1,
    Stealth = 2,
    FlyingBroom = 3,
    EMobilityState_MAX = 4,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EPreWandCastState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    FromLeft = 1,
    FromRight = 2,
    EPreWandCastState_MAX = 3,
};
#pragma pack(pop)
}

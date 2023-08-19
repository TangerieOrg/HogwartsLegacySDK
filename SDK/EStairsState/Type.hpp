#pragma once
#include <cstdint>
namespace EStairsState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    OnStairs = 1,
    OnSlopes = 2,
    EStairsState_MAX = 3,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EStairsDirectionState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    GoingDown = 1,
    GoingUp = 2,
    EStairsDirectionState_MAX = 3,
};
#pragma pack(pop)
}

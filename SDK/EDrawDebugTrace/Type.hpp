#pragma once
#include <cstdint>
namespace EDrawDebugTrace {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    ForOneFrame = 1,
    ForDuration = 2,
    Persistent = 3,
    EDrawDebugTrace_MAX = 4,
};
#pragma pack(pop)
}

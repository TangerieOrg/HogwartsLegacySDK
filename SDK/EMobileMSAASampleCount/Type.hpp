#pragma once
#include <cstdint>
namespace EMobileMSAASampleCount {
#pragma pack(push, 1)
enum Type : uint8_t {
    One = 1,
    Two = 2,
    Four = 4,
    Eight = 8,
    EMobileMSAASampleCount_MAX = 9,
};
#pragma pack(pop)
}

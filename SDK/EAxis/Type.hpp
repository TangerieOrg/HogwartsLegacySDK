#pragma once
#include <cstdint>
namespace EAxis {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    EAxis_MAX = 4,
};
#pragma pack(pop)
}

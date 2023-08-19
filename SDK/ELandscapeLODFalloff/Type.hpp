#pragma once
#include <cstdint>
namespace ELandscapeLODFalloff {
#pragma pack(push, 1)
enum Type : uint8_t {
    Linear = 0,
    SquareRoot = 1,
    ELandscapeLODFalloff_MAX = 2,
};
#pragma pack(pop)
}

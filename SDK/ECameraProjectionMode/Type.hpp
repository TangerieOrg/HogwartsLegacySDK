#pragma once
#include <cstdint>
namespace ECameraProjectionMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Perspective = 0,
    Orthographic = 1,
    ECameraProjectionMode_MAX = 2,
};
#pragma pack(pop)
}

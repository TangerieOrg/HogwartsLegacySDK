#pragma once
#include <cstdint>
namespace EAlphaChannelMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Disabled = 0,
    LinearColorSpaceOnly = 1,
    AllowThroughTonemapper = 2,
    EAlphaChannelMode_MAX = 3,
};
#pragma pack(pop)
}

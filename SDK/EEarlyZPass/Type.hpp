#pragma once
#include <cstdint>
namespace EEarlyZPass {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    OpaqueOnly = 1,
    OpaqueAndMasked = 2,
    Auto = 3,
    EEarlyZPass_MAX = 4,
};
#pragma pack(pop)
}

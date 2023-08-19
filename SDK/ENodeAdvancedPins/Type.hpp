#pragma once
#include <cstdint>
namespace ENodeAdvancedPins {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoPins = 0,
    Shown = 1,
    Hidden = 2,
    ENodeAdvancedPins_MAX = 3,
};
#pragma pack(pop)
}

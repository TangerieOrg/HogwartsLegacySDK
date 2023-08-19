#pragma once
#include <cstdint>
namespace EEnvQueryTrace {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Navigation = 1,
    Geometry = 2,
    NavigationOverLedges = 3,
    EEnvQueryTrace_MAX = 4,
};
#pragma pack(pop)
}

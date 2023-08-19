#pragma once
#include <cstdint>
namespace ELandscapeCullingPrecision {
#pragma pack(push, 1)
enum Type : uint8_t {
    High = 0,
    Medium = 1,
    Low = 2,
    ELandscapeCullingPrecision_MAX = 3,
};
#pragma pack(pop)
}

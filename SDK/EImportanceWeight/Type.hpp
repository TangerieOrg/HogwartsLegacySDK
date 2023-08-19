#pragma once
#include <cstdint>
namespace EImportanceWeight {
#pragma pack(push, 1)
enum Type : uint8_t {
    Luminance = 0,
    Red = 1,
    Green = 2,
    Blue = 3,
    Alpha = 4,
    EImportanceWeight_MAX = 5,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EComponentType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    TranslationX = 1,
    TranslationY = 2,
    TranslationZ = 3,
    RotationX = 4,
    RotationY = 5,
    RotationZ = 6,
    Scale = 7,
    ScaleX = 8,
    ScaleY = 9,
    ScaleZ = 10,
    EComponentType_MAX = 11,
};
#pragma pack(pop)
}

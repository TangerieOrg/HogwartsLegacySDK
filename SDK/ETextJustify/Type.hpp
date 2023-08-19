#pragma once
#include <cstdint>
namespace ETextJustify {
#pragma pack(push, 1)
enum Type : uint8_t {
    Left = 0,
    Center = 1,
    Right = 2,
    ETextJustify_MAX = 3,
};
#pragma pack(pop)
}

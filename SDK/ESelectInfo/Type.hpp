#pragma once
#include <cstdint>
namespace ESelectInfo {
#pragma pack(push, 1)
enum Type : uint8_t {
    OnKeyPress = 0,
    OnNavigation = 1,
    OnMouseClick = 2,
    Direct = 3,
    ESelectInfo_MAX = 4,
};
#pragma pack(pop)
}

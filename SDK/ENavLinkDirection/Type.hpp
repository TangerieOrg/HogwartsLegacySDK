#pragma once
#include <cstdint>
namespace ENavLinkDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    BothWays = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ENavLinkDirection_MAX = 3,
};
#pragma pack(pop)
}

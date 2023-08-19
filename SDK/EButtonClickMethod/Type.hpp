#pragma once
#include <cstdint>
namespace EButtonClickMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    DownAndUp = 0,
    MouseDown = 1,
    MouseUp = 2,
    PreciseClick = 3,
    EButtonClickMethod_MAX = 4,
};
#pragma pack(pop)
}

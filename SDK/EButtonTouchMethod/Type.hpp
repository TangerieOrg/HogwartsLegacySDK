#pragma once
#include <cstdint>
namespace EButtonTouchMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    DownAndUp = 0,
    Down = 1,
    PreciseTap = 2,
    EButtonTouchMethod_MAX = 3,
};
#pragma pack(pop)
}

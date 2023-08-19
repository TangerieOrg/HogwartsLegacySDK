#pragma once
#include <cstdint>
namespace EButtonPressMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    DownAndUp = 0,
    ButtonPress = 1,
    ButtonRelease = 2,
    EButtonPressMethod_MAX = 3,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EWindowMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Fullscreen = 0,
    WindowedFullscreen = 1,
    Windowed = 2,
    EWindowMode_MAX = 3,
};
#pragma pack(pop)
}

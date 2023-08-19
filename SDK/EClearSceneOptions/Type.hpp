#pragma once
#include <cstdint>
namespace EClearSceneOptions {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoClear = 0,
    HardwareClear = 1,
    QuadAtMaxZ = 2,
    EClearSceneOptions_MAX = 3,
};
#pragma pack(pop)
}

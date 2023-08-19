#pragma once
#include <cstdint>
namespace EDefaultBackBufferPixelFormat {
#pragma pack(push, 1)
enum Type : uint8_t {
    DBBPF_B8G8R8A8 = 0,
    DBBPF_A16B16G16R16_DEPRECATED = 1,
    DBBPF_FloatRGB_DEPRECATED = 2,
    DBBPF_FloatRGBA = 3,
    DBBPF_A2B10G10R10 = 4,
    DBBPF_MAX = 5,
};
#pragma pack(pop)
}

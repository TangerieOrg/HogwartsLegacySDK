#pragma once
#include <cstdint>
namespace EGBufferFormat {
#pragma pack(push, 1)
enum Type : uint8_t {
    Force8BitsPerChannel = 0,
    Default = 1,
    HighPrecisionNormals = 3,
    Force16BitsPerChannel = 5,
    EGBufferFormat_MAX = 6,
};
#pragma pack(pop)
}

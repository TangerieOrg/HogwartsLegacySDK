#pragma once
#include <cstdint>
namespace ENDISkelMesh_GpuUniformSamplingFormat {
#pragma pack(push, 1)
enum Type : uint8_t {
    Full = 0,
    Limited_24_8 = 1,
    Limited_23_9 = 2,
    ENDISkelMesh_MAX = 3,
};
#pragma pack(pop)
}

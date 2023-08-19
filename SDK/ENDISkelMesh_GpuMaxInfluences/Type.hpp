#pragma once
#include <cstdint>
namespace ENDISkelMesh_GpuMaxInfluences {
#pragma pack(push, 1)
enum Type : uint8_t {
    AllowMax4 = 0,
    AllowMax8 = 1,
    Unlimited = 2,
    ENDISkelMesh_MAX = 3,
};
#pragma pack(pop)
}

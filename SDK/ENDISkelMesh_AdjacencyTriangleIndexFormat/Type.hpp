#pragma once
#include <cstdint>
namespace ENDISkelMesh_AdjacencyTriangleIndexFormat {
#pragma pack(push, 1)
enum Type : uint8_t {
    Full = 0,
    Half = 1,
    ENDISkelMesh_MAX = 2,
};
#pragma pack(pop)
}

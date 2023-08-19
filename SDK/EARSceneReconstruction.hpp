#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARSceneReconstruction : uint8_t {
    None = 0,
    MeshOnly = 1,
    MeshWithClassification = 2,
    EARSceneReconstruction_MAX = 3,
};
#pragma pack(pop)

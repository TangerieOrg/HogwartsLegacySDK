#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENDIStaticMesh_SourceMode : uint8_t {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
    ENDIStaticMesh_MAX = 4,
};
#pragma pack(pop)

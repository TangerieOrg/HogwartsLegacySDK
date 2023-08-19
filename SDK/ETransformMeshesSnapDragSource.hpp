#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformMeshesSnapDragSource : uint8_t {
    ClickPoint = 0,
    Pivot = 1,
    LastValue = 2,
    ETransformMeshesSnapDragSource_MAX = 3,
};
#pragma pack(pop)

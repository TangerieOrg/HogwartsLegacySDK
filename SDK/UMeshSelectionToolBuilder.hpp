#pragma once
#include <cstdint>
#include "UMeshSurfacePointToolBuilder.hpp"
#pragma pack(push, 1)
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder {
public:
    char pad_30[0x8];
    static UMeshSelectionToolBuilder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

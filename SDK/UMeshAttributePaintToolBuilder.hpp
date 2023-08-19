#pragma once
#include <cstdint>
#include "UMeshSurfacePointToolBuilder.hpp"
#pragma pack(push, 1)
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder {
public:
    char pad_30[0x50];
    static UMeshAttributePaintToolBuilder* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

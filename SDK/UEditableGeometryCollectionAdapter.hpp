#pragma once
#include <cstdint>
#include "UEditableMeshAdapter.hpp"
class UGeometryCollection;
#pragma pack(push, 1)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter {
public:
    UGeometryCollection* GeometryCollection; // 0x28
    UGeometryCollection* OriginalGeometryCollection; // 0x30
    int32_t GeometryCollectionLODIndex; // 0x38
    char pad_3c[0x9c];
    static UEditableGeometryCollectionAdapter* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)

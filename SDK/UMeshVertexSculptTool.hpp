#pragma once
#include <cstdint>
#include "UMeshSculptToolBase.hpp"
class UVertexBrushSculptProperties;
class USimpleDynamicMeshComponent;
#pragma pack(push, 1)
class UMeshVertexSculptTool : public UMeshSculptToolBase {
public:
    USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x9e0
    char pad_9e8[0x848];
    static UMeshVertexSculptTool* StaticClass();
}; // Size: 0x1230
#pragma pack(pop)

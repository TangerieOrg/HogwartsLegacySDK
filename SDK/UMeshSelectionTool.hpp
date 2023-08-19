#pragma once
#include <cstdint>
#include "UDynamicMeshBrushTool.hpp"
class UMeshSelectionToolProperties;
class UMeshSelectionEditActions;
class UMeshSelectionToolActionPropertySet;
class UMeshSelectionSet;
class AActor;
#pragma pack(push, 1)
class UMeshSelectionTool : public UDynamicMeshBrushTool {
public:
    UMeshSelectionToolProperties* SelectionProps; // 0x1f8
    UMeshSelectionEditActions* SelectionActions; // 0x200
    UMeshSelectionToolActionPropertySet* EditActions; // 0x208
    UMeshSelectionSet* Selection; // 0x210
    TArray<AActor*> SpawnedActors; // 0x218
    char pad_228[0x268];
    static UMeshSelectionTool* StaticClass();
}; // Size: 0x490
#pragma pack(pop)

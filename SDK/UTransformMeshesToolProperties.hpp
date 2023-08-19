#pragma once
#include <cstdint>
#include "ETransformMeshesSnapDragRotationMode.hpp"
#include "ETransformMeshesSnapDragSource.hpp"
#include "ETransformMeshesTransformMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    ETransformMeshesTransformMode TransformMode; // 0x60
    bool bSetPivot; // 0x61
    bool bEnableSnapDragging; // 0x62
    ETransformMeshesSnapDragSource SnapDragSource; // 0x63
    ETransformMeshesSnapDragRotationMode RotationMode; // 0x64
    char pad_65[0x3];
    static UTransformMeshesToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

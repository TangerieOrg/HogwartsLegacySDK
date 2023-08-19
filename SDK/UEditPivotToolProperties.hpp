#pragma once
#include <cstdint>
#include "EEditPivotSnapDragRotationMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UEditPivotToolProperties : public UInteractiveToolPropertySet {
public:
    bool bEnableSnapDragging; // 0x60
    EEditPivotSnapDragRotationMode RotationMode; // 0x61
    char pad_62[0x6];
    static UEditPivotToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

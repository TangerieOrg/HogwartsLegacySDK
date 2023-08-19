#pragma once
#include <cstdint>
#include "FEditPivotTarget.hpp"
#include "UMultiSelectionTool.hpp"
class UEditPivotToolProperties;
class UEditPivotToolActionPropertySet;
#pragma pack(push, 1)
class UEditPivotTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UEditPivotToolProperties* TransformProps; // 0x98
    UEditPivotToolActionPropertySet* EditPivotActions; // 0xa0
    char pad_a8[0xd0];
    TArray<FEditPivotTarget> ActiveGizmos; // 0x178
    char pad_188[0x78];
    static UEditPivotTool* StaticClass();
}; // Size: 0x200
#pragma pack(pop)

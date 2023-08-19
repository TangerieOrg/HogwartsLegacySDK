#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class USmoothHoleFillProperties;
class UHoleFillToolProperties;
class UHoleFillToolActions;
class UHoleFillStatisticsProperties;
class UPolygonSelectionMechanic;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UHoleFillTool : public USingleSelectionTool {
public:
    char pad_88[0x10];
    USmoothHoleFillProperties* SmoothHoleFillProperties; // 0x98
    UHoleFillToolProperties* Properties; // 0xa0
    UHoleFillToolActions* Actions; // 0xa8
    UHoleFillStatisticsProperties* Statistics; // 0xb0
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb8
    UPolygonSelectionMechanic* SelectionMechanic; // 0xc0
    char pad_c8[0x118];
    static UHoleFillTool* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)

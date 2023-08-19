#pragma once
#include <cstdint>
#include "EDynamicMeshSculptBrushType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBrushSculptProperties : public UInteractiveToolPropertySet {
public:
    bool bIsRemeshingEnabled; // 0x60
    EDynamicMeshSculptBrushType PrimaryBrushType; // 0x61
    char pad_62[0x2];
    float PrimaryBrushSpeed; // 0x64
    bool bPreserveUVFlow; // 0x68
    bool bFreezeTarget; // 0x69
    char pad_6a[0x2];
    float SmoothBrushSpeed; // 0x6c
    bool bDetailPreservingSmooth; // 0x70
    char pad_71[0x7];
    static UBrushSculptProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

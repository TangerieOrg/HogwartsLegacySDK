#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UWorkPlaneProperties : public UInteractiveToolPropertySet {
public:
    bool bPropertySetEnabled; // 0x60
    bool bShowGizmo; // 0x61
    bool bSnapToGrid; // 0x62
    char pad_63[0x1];
    FVector Position; // 0x64
    FQuat Rotation; // 0x70
    static UWorkPlaneProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

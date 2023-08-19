#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTransformProxy : public UObject {
public:
    char pad_28[0x48];
    bool bRotatePerObject; // 0x70
    bool bSetPivotMode; // 0x71
    char pad_72[0x1e];
    FTransform SharedTransform; // 0x90
    FTransform InitialSharedTransform; // 0xc0
    static UTransformProxy* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)

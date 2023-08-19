#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneComponent;
#pragma pack(push, 1)
class UGizmoComponentAxisSource : public UObject {
public:
    char pad_28[0x8];
    USceneComponent* Component; // 0x30
    int32_t AxisIndex; // 0x38
    bool bLocalAxes; // 0x3c
    char pad_3d[0x3];
    static UGizmoComponentAxisSource* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

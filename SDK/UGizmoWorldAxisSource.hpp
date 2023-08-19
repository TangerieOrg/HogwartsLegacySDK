#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGizmoWorldAxisSource : public UObject {
public:
    char pad_28[0x8];
    FVector Origin; // 0x30
    int32_t AxisIndex; // 0x3c
    static UGizmoWorldAxisSource* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

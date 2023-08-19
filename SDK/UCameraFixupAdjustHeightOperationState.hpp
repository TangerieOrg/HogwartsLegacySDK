#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupAdjustHeightOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x18];
    UTransformProvider* HeightTarget; // 0x58
    char pad_60[0x18];
    static UCameraFixupAdjustHeightOperationState* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

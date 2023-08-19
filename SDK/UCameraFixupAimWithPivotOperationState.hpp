#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupAimWithPivotOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x10];
    UTransformProvider* AimTarget; // 0x50
    char pad_58[0x18];
    static UCameraFixupAimWithPivotOperationState* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

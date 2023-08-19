#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupSetTargetOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x8];
    UTransformProvider* Target; // 0x48
    char pad_50[0x10];
    static UCameraFixupSetTargetOperationState* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UCameraFixupOperationState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupAimAtOperationState : public UCameraFixupOperationState {
public:
    char pad_40[0x90];
    UTransformProvider* AimTarget; // 0xd0
    char pad_d8[0x58];
    static UCameraFixupAimAtOperationState* StaticClass();
}; // Size: 0x130
#pragma pack(pop)

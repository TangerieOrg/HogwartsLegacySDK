#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase {
    char pad_8[0x8];
    FQuat TargetValue; // 0x10
    FQuat InitialValue; // 0x20
    float Blend; // 0x30
    bool bIntegrateDeltaTime; // 0x34
    char pad_35[0xb];
    FQuat Result; // 0x40
    FQuat AccumulatedValue; // 0x50
}; // Size: 0x60
#pragma pack(pop)

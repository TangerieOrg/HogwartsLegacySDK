#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase {
    char pad_8[0x8];
    FQuat Multiplier; // 0x10
    FQuat InitialValue; // 0x20
    bool bFlipOrder; // 0x30
    bool bIntegrateDeltaTime; // 0x31
    char pad_32[0xe];
    FQuat Result; // 0x40
    FQuat AccumulatedValue; // 0x50
}; // Size: 0x60
#pragma pack(pop)

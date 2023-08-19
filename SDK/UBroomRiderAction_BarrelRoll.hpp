#pragma once
#include <cstdint>
#include "EBarrelRollDirection.hpp"
#include "UBroomRiderActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_BarrelRoll : public UBroomRiderActionBase {
public:
    EBarrelRollDirection RollDirection; // 0x38
    char pad_3c[0xc];
    static UBroomRiderAction_BarrelRoll* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

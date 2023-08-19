#pragma once
#include <cstdint>
#include "EControlRigFKRigExecuteMode.hpp"
#include "UControlRig.hpp"
#pragma pack(push, 1)
class UFKControlRig : public UControlRig {
public:
    TArray<bool> IsControlActive; // 0x650
    EControlRigFKRigExecuteMode ApplyMode; // 0x660
    char pad_661[0x7];
    static UFKControlRig* StaticClass();
}; // Size: 0x668
#pragma pack(pop)

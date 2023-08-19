#pragma once
#include <cstdint>
#include "UTimeRigIntervalState.hpp"
class UTimeRig;
class UTimeRigInstanceContext;
#pragma pack(push, 1)
class UTimeRigRuleState : public UTimeRigIntervalState {
public:
    char pad_50[0x18];
    UTimeRig* GeneratedTimeRig; // 0x68
    UTimeRigInstanceContext* InstanceContext; // 0x70
    static UTimeRigRuleState* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

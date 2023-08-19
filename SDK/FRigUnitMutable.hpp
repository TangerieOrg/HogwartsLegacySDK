#pragma once
#include <cstdint>
#include "FControlRigExecuteContext.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnitMutable : public FRigUnit {
    FControlRigExecuteContext ExecuteContext; // 0x8
}; // Size: 0x68
#pragma pack(pop)

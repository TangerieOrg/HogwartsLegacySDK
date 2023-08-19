#pragma once
#include <cstdint>
#include "FControlRigExecuteContext.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_BeginExecution : public FRigUnit {
    FControlRigExecuteContext ExecuteContext; // 0x8
}; // Size: 0x68
#pragma pack(pop)

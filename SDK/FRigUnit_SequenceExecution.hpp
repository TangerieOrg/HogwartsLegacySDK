#pragma once
#include <cstdint>
#include "FControlRigExecuteContext.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_SequenceExecution : public FRigUnit {
    FControlRigExecuteContext ExecuteContext; // 0x8
    FControlRigExecuteContext A; // 0x68
    FControlRigExecuteContext B; // 0xc8
    FControlRigExecuteContext C; // 0x128
    FControlRigExecuteContext D; // 0x188
}; // Size: 0x1e8
#pragma pack(pop)

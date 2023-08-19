#pragma once
#include <cstdint>
#include "FControlRigExecuteContext.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_ForLoopCount : public FRigUnitMutable {
    int32_t Count; // 0x68
    int32_t Index; // 0x6c
    float Ratio; // 0x70
    bool Continue; // 0x74
    char pad_75[0x3];
    FControlRigExecuteContext Completed; // 0x78
}; // Size: 0xd8
#pragma pack(pop)

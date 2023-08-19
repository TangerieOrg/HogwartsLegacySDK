#pragma once
#include <cstdint>
#include "FRigVMInstruction.hpp"
#pragma pack(push, 1)
struct FRigVMInstructionArray {
    TArray<FRigVMInstruction> Instructions; // 0x0
}; // Size: 0x10
#pragma pack(pop)

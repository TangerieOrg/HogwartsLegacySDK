#pragma once
#include <cstdint>
class UCameraStackOperationBase;
class UCameraStackOperationScratchData;
#pragma pack(push, 1)
struct FCameraStackOperationState {
    UCameraStackOperationBase* Operation; // 0x0
    UCameraStackOperationScratchData* ScratchData; // 0x8
}; // Size: 0x10
#pragma pack(pop)

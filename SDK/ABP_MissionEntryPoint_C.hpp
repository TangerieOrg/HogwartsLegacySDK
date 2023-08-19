#pragma once
#include <cstdint>
#include "AMissionEntryPoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_MissionEntryPoint_C : public AMissionEntryPoint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    static ABP_MissionEntryPoint_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MissionEntryPoint(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)

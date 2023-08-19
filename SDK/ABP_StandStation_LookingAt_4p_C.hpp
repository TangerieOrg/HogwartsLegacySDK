#pragma once
#include <cstdint>
#include "ABP_Station_Propless4p_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStationArchitectComponent;
#pragma pack(push, 1)
class ABP_StandStation_LookingAt_4p_C : public ABP_Station_Propless4p_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x498
    UStationArchitectComponent* StationArchitect; // 0x4a0
    static ABP_StandStation_LookingAt_4p_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_StandStation_LookingAt_4p(int32_t EntryPoint);
}; // Size: 0x4a8
#pragma pack(pop)

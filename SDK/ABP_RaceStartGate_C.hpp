#pragma once
#include <cstdint>
#include "ARace.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_RaceStartGate_C : public ARace {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d8
    UStaticMeshComponent* SM_BroomRace_FlagA1; // 0x5e0
    UStaticMeshComponent* SM_BroomRace_FlagA; // 0x5e8
    UStaticMeshComponent* SM_BroomRace_TopFlagA; // 0x5f0
    UStaticMeshComponent* SM_BroomRace_TopFlagB; // 0x5f8
    UStaticMeshComponent* SM_BRR_Post01; // 0x600
    UStaticMeshComponent* SM_BRR_Post02; // 0x608
    UStaticMeshComponent* SM_BRR_Post01_Base; // 0x610
    UStaticMeshComponent* SM_BRR_Post01_Base1; // 0x618
    UStaticMeshComponent* SM_BRR_RaceFlags; // 0x620
    static ABP_RaceStartGate_C* StaticClass();
    void OnRaceFinish0();
    void OnRaceStart0();
    void OnRaceAbandoned0();
    void ExecuteUbergraph_BP_RaceStartGate(int32_t EntryPoint);
}; // Size: 0x628
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AInstancedFlockingActor.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_InstancedFlock_C : public AInstancedFlockingActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x6c0
    FMasterTickThrottlerSettings NewVar_0; // 0x6c8
    float Full_Tick_Radius; // 0x6f0
    float No_Tick_Radius; // 0x6f4
    char pad_6f8[0x8];
    static ABP_InstancedFlock_C* StaticClass();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_InstancedFlock(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings);
}; // Size: 0x700
#pragma pack(pop)

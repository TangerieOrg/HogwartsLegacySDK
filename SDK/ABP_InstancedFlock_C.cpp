#include "ABP_InstancedFlock_C.hpp"
#include "AInstancedFlockingActor.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_InstancedFlock_C* ABP_InstancedFlock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_InstancedFlock.BP_InstancedFlock_C");
    return (ABP_InstancedFlock_C*)res;
}
void ABP_InstancedFlock_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_InstancedFlock.BP_InstancedFlock_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_InstancedFlock_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_InstancedFlock.BP_InstancedFlock_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_InstancedFlock_C::ExecuteUbergraph_BP_InstancedFlock(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_InstancedFlock.BP_InstancedFlock_C.ExecuteUbergraph_BP_InstancedFlock"));
    struct Params_ExecuteUbergraph_BP_InstancedFlock {
        int32_t EntryPoint; // 0x0
        FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced; // 0x4
        char pad_5[0x3];
        FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings; // 0x8
    }; // Size: 0x30
    Params_ExecuteUbergraph_BP_InstancedFlock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced = (FMasterTickThrottlerSettingsAdvanced)K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced;
    params.K2Node_MakeStruct_MasterTickThrottlerSettings = (FMasterTickThrottlerSettings)K2Node_MakeStruct_MasterTickThrottlerSettings;
    ProcessEvent(func, &params);
}

#include "ABP_Plant_HonkingDaffodils_NonForagable_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "EVisibilityBasedAnimTickOption.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABP_HonkingDaffodils_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void ABP_Plant_HonkingDaffodils_NonForagable_C::StartHonking(bool bStart, bool Temp_bool_Variable, EVisibilityBasedAnimTickOption Temp_byte_Variable, EVisibilityBasedAnimTickOption Temp_byte_Variable_1, EVisibilityBasedAnimTickOption K2Node_Select_Default, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_HonkingDaffodils_C* K2Node_DynamicCast_AsABP_Honking_Daffodils, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.StartHonking"));
    struct Params_StartHonking {
        bool bStart; // 0x0
        bool Temp_bool_Variable; // 0x1
        EVisibilityBasedAnimTickOption Temp_byte_Variable; // 0x2
        EVisibilityBasedAnimTickOption Temp_byte_Variable_1; // 0x3
        EVisibilityBasedAnimTickOption K2Node_Select_Default; // 0x4
        char pad_5[0x3];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x8
        UABP_HonkingDaffodils_C* K2Node_DynamicCast_AsABP_Honking_Daffodils; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_StartHonking params{};
    params.bStart = (bool)bStart;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (EVisibilityBasedAnimTickOption)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EVisibilityBasedAnimTickOption)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (EVisibilityBasedAnimTickOption)K2Node_Select_Default;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Honking_Daffodils = (UABP_HonkingDaffodils_C*)K2Node_DynamicCast_AsABP_Honking_Daffodils;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
ABP_Plant_HonkingDaffodils_NonForagable_C* ABP_Plant_HonkingDaffodils_NonForagable_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C");
    return (ABP_Plant_HonkingDaffodils_NonForagable_C*)res;
}
void ABP_Plant_HonkingDaffodils_NonForagable_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Plant_HonkingDaffodils_NonForagable_C::ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/Blueprints/HonkingDaffodils/BP_Plant_HonkingDaffodils_NonForagable.BP_Plant_HonkingDaffodils_NonForagable_C.ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable"));
    struct Params_ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable {
        int32_t EntryPoint; // 0x0
        FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced; // 0x4
        char pad_5[0x3];
        FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings; // 0x8
    }; // Size: 0x30
    Params_ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced = (FMasterTickThrottlerSettingsAdvanced)K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced;
    params.K2Node_MakeStruct_MasterTickThrottlerSettings = (FMasterTickThrottlerSettings)K2Node_MakeStruct_MasterTickThrottlerSettings;
    ProcessEvent(func, &params);
}

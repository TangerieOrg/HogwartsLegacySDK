#include "AActor.hpp"
#include "ABP_OL_StoneSkipping_Interaction_C.hpp"
#include "ASimpleInteractObject.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UArrowComponent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_OL_StoneSkipping_Interaction_C::UserConstructionScript(TArray<USceneComponent*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        TArray<USceneComponent*> K2Node_MakeArray_Array; // 0x0
    }; // Size: 0x10
    Params_UserConstructionScript params{};
    params.K2Node_MakeArray_Array = (TArray<USceneComponent*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
ABP_OL_StoneSkipping_Interaction_C* ABP_OL_StoneSkipping_Interaction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C");
    return (ABP_OL_StoneSkipping_Interaction_C*)res;
}
void ABP_OL_StoneSkipping_Interaction_C::SpawnRocks(int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue, UClass* CallFunc_Array_Get_Item, int32_t CallFunc_RandomIntegerInRange_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue_1, USceneComponent* CallFunc_Array_Get_Item_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.SpawnRocks"));
    struct Params_SpawnRocks {
        int32_t Temp_int_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8
        int32_t CallFunc_RandomInteger_ReturnValue; // 0xc
        UClass* CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_RandomIntegerInRange_ReturnValue; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1c
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_RandomInteger_ReturnValue_1; // 0x24
        USceneComponent* CallFunc_Array_Get_Item_1; // 0x28
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x30
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x60
        AActor* CallFunc_FinishSpawningActor_ReturnValue; // 0x68
        int32_t CallFunc_Array_Add_ReturnValue; // 0x70
    }; // Size: 0x74
    Params_SpawnRocks params{};
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_RandomInteger_ReturnValue = (int32_t)CallFunc_RandomInteger_ReturnValue;
    params.CallFunc_Array_Get_Item = (UClass*)CallFunc_Array_Get_Item;
    params.CallFunc_RandomIntegerInRange_ReturnValue = (int32_t)CallFunc_RandomIntegerInRange_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_RandomInteger_ReturnValue_1 = (int32_t)CallFunc_RandomInteger_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (USceneComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (AActor*)CallFunc_FinishSpawningActor_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_OL_StoneSkipping_Interaction_C::InteractionInitiated0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
    }; // Size: 0x0
    Params_InteractionInitiated params{};
    ProcessEvent(func, &params);
}
void ABP_OL_StoneSkipping_Interaction_C::ExecuteUbergraph_BP_OL_StoneSkipping_Interaction(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_ActorStartFade_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32_t CallFunc_Add_IntInt_ReturnValue_1, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.ExecuteUbergraph_BP_OL_StoneSkipping_Interaction"));
    struct Params_ExecuteUbergraph_BP_OL_StoneSkipping_Interaction {
        int32_t EntryPoint; // 0x0
        FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced; // 0x4
        char pad_5[0x3];
        FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x30
        int32_t Temp_int_Loop_Counter_Variable; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x38
        char pad_3c[0x4];
        UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration; // 0x48
        char pad_54[0x4];
        AActor* CallFunc_Array_Get_Item; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        bool CallFunc_ActorStartFade_ReturnValue; // 0x64
        bool CallFunc_Less_IntInt_ReturnValue; // 0x65
        bool K2Node_SwitchInteger_CmpSuccess; // 0x66
        char pad_67[0x1];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x68
        char pad_6c[0x4];
        UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x70
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x78
    }; // Size: 0x79
    Params_ExecuteUbergraph_BP_OL_StoneSkipping_Interaction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced = (FMasterTickThrottlerSettingsAdvanced)K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced;
    params.K2Node_MakeStruct_MasterTickThrottlerSettings = (FMasterTickThrottlerSettings)K2Node_MakeStruct_MasterTickThrottlerSettings;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCognitionStimuliSourceComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.K2Node_MakeStruct_ObjectFadeParamsSpeedDuration = (FObjectFadeParamsSpeedDuration)K2Node_MakeStruct_ObjectFadeParamsSpeedDuration;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_ActorStartFade_ReturnValue = (bool)CallFunc_ActorStartFade_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCognitionStimuliSourceComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_OL_StoneSkipping_Interaction_C::DestroySpawnedRocks() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.DestroySpawnedRocks"));
    struct Params_DestroySpawnedRocks {
    }; // Size: 0x0
    Params_DestroySpawnedRocks params{};
    ProcessEvent(func, &params);
}
void ABP_OL_StoneSkipping_Interaction_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Interaction/BP_OL_StoneSkipping_Interaction.BP_OL_StoneSkipping_Interaction_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}

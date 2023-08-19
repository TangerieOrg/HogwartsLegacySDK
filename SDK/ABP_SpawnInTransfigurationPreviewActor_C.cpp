#include "AActor.hpp"
#include "ABP_SpawnInTransfigurationPreviewActor_C.hpp"
#include "ABP_TransfigurationMovementStyle_SpawnIn_C.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
void ABP_SpawnInTransfigurationPreviewActor_C::ExecuteUbergraph_BP_SpawnInTransfigurationPreviewActor(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FVector CallFunc_GetVelocity_ReturnValue, FTransform CallFunc_GetTargetTransform_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue_1, TArray<AActor*>& K2Node_Event_InNewActors, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, ABP_TransfigurationMovementStyle_SpawnIn_C* CallFunc_FinishSpawningActor_ReturnValue, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_SpawnInTransfigurationPreviewActor.BP_SpawnInTransfigurationPreviewActor_C.ExecuteUbergraph_BP_SpawnInTransfigurationPreviewActor"));
    struct Params_ExecuteUbergraph_BP_SpawnInTransfigurationPreviewActor {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        FVector CallFunc_GetVelocity_ReturnValue; // 0x14
        FTransform CallFunc_GetTargetTransform_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x50
        char pad_51[0xf];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x60
        bool CallFunc_NearlyEqual_TransformTransform_ReturnValue; // 0x90
        bool CallFunc_BooleanAND_ReturnValue; // 0x91
        char pad_92[0xe];
        FTransform CallFunc_GetTransform_ReturnValue_1; // 0xa0
        TArray<AActor*> K2Node_Event_InNewActors; // 0xd0
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xe0
        AActor* CallFunc_Array_Get_Item; // 0xe8
        bool CallFunc_IsValid_ReturnValue; // 0xf0
        char pad_f1[0x7];
        ABP_TransfigurationMovementStyle_SpawnIn_C* CallFunc_FinishSpawningActor_ReturnValue; // 0xf8
        AActor* CallFunc_Array_Get_Item_1; // 0x100
        int32_t CallFunc_Array_Length_ReturnValue; // 0x108
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x10c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x110
        char pad_111[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x114
        bool CallFunc_IsValid_ReturnValue_1; // 0x118
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x119
        char pad_11a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x11c
    }; // Size: 0x120
    Params_ExecuteUbergraph_BP_SpawnInTransfigurationPreviewActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_GetVelocity_ReturnValue = (FVector)CallFunc_GetVelocity_ReturnValue;
    params.CallFunc_GetTargetTransform_ReturnValue = (FTransform)CallFunc_GetTargetTransform_ReturnValue;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_NearlyEqual_TransformTransform_ReturnValue = (bool)CallFunc_NearlyEqual_TransformTransform_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue_1 = (FTransform)CallFunc_GetTransform_ReturnValue_1;
    params.K2Node_Event_InNewActors = (TArray<AActor*>)K2Node_Event_InNewActors;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_TransfigurationMovementStyle_SpawnIn_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (AActor*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    K2Node_Event_InNewActors = params.K2Node_Event_InNewActors;
}
ABP_SpawnInTransfigurationPreviewActor_C* ABP_SpawnInTransfigurationPreviewActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/BP_SpawnInTransfigurationPreviewActor.BP_SpawnInTransfigurationPreviewActor_C");
    return (ABP_SpawnInTransfigurationPreviewActor_C*)res;
}
void ABP_SpawnInTransfigurationPreviewActor_C::BlueprintInitialize0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_SpawnInTransfigurationPreviewActor.BP_SpawnInTransfigurationPreviewActor_C.BlueprintInitialize"));
    struct Params_BlueprintInitialize {
    }; // Size: 0x0
    Params_BlueprintInitialize params{};
    ProcessEvent(func, &params);
}
void ABP_SpawnInTransfigurationPreviewActor_C::ObjectConfirmed0(TArray<AActor*>& InNewActors) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_SpawnInTransfigurationPreviewActor.BP_SpawnInTransfigurationPreviewActor_C.ObjectConfirmed"));
    struct Params_ObjectConfirmed {
        TArray<AActor*> InNewActors; // 0x0
    }; // Size: 0x10
    Params_ObjectConfirmed params{};
    params.InNewActors = (TArray<AActor*>)InNewActors;
    ProcessEvent(func, &params);
    InNewActors = params.InNewActors;
}

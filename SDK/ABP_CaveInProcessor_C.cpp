#include "AActor.hpp"
#include "ABP_CaveInElement_C.hpp"
#include "ABP_CaveInProcessor_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_CaveInElement.hpp"
#include "FSTR_CaveInParticleElement.hpp"
#include "FSTR_CaveIn_AnimMeshElement.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_CaveInProcessor_C::ExecuteUbergraph_BP_CaveInProcessor(int32_t EntryPoint, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue, ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FSTR_CaveInElement K2Node_CustomEvent_InputElement, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FSTR_CaveIn_AnimMeshElement CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FSTR_CaveInParticleElement CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInProcessor.BP_CaveInProcessor_C.ExecuteUbergraph_BP_CaveInProcessor"));
    struct Params_ExecuteUbergraph_BP_CaveInProcessor {
        int32_t EntryPoint; // 0x0
        char pad_4[0xc];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x10
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x40
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x48
        ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x50
        ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue_1; // 0x58
        int32_t Temp_int_Array_Index_Variable; // 0x60
        int32_t Temp_int_Loop_Counter_Variable; // 0x64
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x68
        int32_t Temp_int_Array_Index_Variable_1; // 0x6c
        FSTR_CaveInElement K2Node_CustomEvent_InputElement; // 0x70
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x98
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x9c
        FSTR_CaveIn_AnimMeshElement CallFunc_Array_Get_Item; // 0xa0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x100
        bool CallFunc_Less_IntInt_ReturnValue; // 0x104
        char pad_105[0xb];
        FSTR_CaveInParticleElement CallFunc_Array_Get_Item_1; // 0x110
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x160
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x164
    }; // Size: 0x165
    Params_ExecuteUbergraph_BP_CaveInProcessor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_CaveInElement_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue_1 = (ABP_CaveInElement_C*)CallFunc_FinishSpawningActor_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_CustomEvent_InputElement = (FSTR_CaveInElement)K2Node_CustomEvent_InputElement;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (FSTR_CaveIn_AnimMeshElement)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FSTR_CaveInParticleElement)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
ABP_CaveInProcessor_C* ABP_CaveInProcessor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInProcessor.BP_CaveInProcessor_C");
    return (ABP_CaveInProcessor_C*)res;
}
void ABP_CaveInProcessor_C::ProcessElement(FSTR_CaveInElement InputElement) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_CaveInProcessor.BP_CaveInProcessor_C.ProcessElement"));
    struct Params_ProcessElement {
        FSTR_CaveInElement InputElement; // 0x0
    }; // Size: 0x28
    Params_ProcessElement params{};
    params.InputElement = (FSTR_CaveInElement)InputElement;
    ProcessEvent(func, &params);
}

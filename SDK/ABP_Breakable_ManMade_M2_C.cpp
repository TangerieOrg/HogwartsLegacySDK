#include "AActor.hpp"
#include "ABP_Breakable_ManMade_M2_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "USceneComponent.hpp"
void ABP_Breakable_ManMade_M2_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_M2.BP_Breakable_ManMade_M2_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_Breakable_ManMade_M2_C* ABP_Breakable_ManMade_M2_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_M2.BP_Breakable_ManMade_M2_C");
    return (ABP_Breakable_ManMade_M2_C*)res;
}
void ABP_Breakable_ManMade_M2_C::ExecuteUbergraph_BP_Breakable_ManMade_M2(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, UChildActorComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_M2.BP_Breakable_ManMade_M2_C.ExecuteUbergraph_BP_Breakable_ManMade_M2"));
    struct Params_ExecuteUbergraph_BP_Breakable_ManMade_M2 {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        char pad_c[0x4];
        TArray<UChildActorComponent*> K2Node_MakeArray_Array; // 0x10
        UChildActorComponent* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x2c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x2d
        char pad_2e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x30
        char pad_34[0x4];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue_1; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BP_Breakable_ManMade_M2 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.K2Node_MakeArray_Array = (TArray<UChildActorComponent*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item = (UChildActorComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}

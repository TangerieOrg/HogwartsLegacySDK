#include "AActor.hpp"
#include "ABP_Breakable_ManMade_L2_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "USceneComponent.hpp"
ABP_Breakable_ManMade_L2_C* ABP_Breakable_ManMade_L2_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_L2.BP_Breakable_ManMade_L2_C");
    return (ABP_Breakable_ManMade_L2_C*)res;
}
void ABP_Breakable_ManMade_L2_C::ExecuteUbergraph_BP_Breakable_ManMade_L2(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, UChildActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_L2.BP_Breakable_ManMade_L2_C.ExecuteUbergraph_BP_Breakable_ManMade_L2"));
    struct Params_ExecuteUbergraph_BP_Breakable_ManMade_L2 {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        TArray<UChildActorComponent*> K2Node_MakeArray_Array; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        UChildActorComponent* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x31
        char pad_32[0x6];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue_1; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BP_Breakable_ManMade_L2 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UChildActorComponent*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UChildActorComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_Breakable_ManMade_L2_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Breakable_ManMade_L2.BP_Breakable_ManMade_L2_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}

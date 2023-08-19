#include "ABP_Sanc_HubCorner_03_C.hpp"
#include "ABP_SelfArrangingBooks_C.hpp"
#include "ATransfigurationStructureBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActorComponent.hpp"
#include "UCameraStackFramingLocationComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
#include "UOdcObstacleComponent.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
ABP_Sanc_HubCorner_03_C* ABP_Sanc_HubCorner_03_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C");
    return (ABP_Sanc_HubCorner_03_C*)res;
}
void ABP_Sanc_HubCorner_03_C::ExecuteUbergraph_BP_Sanc_HubCorner_03(int32_t EntryPoint, TArray<UActorComponent*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.ExecuteUbergraph_BP_Sanc_HubCorner_03"));
    struct Params_ExecuteUbergraph_BP_Sanc_HubCorner_03 {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<UActorComponent*> K2Node_MakeArray_Array; // 0x8
    }; // Size: 0x18
    Params_ExecuteUbergraph_BP_Sanc_HubCorner_03 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeArray_Array = (TArray<UActorComponent*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_Sanc_HubCorner_03_C::SetUpBookChildActor(UObject* ChildActor, TArray<USplineComponent*>& SplineArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, USplineComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books_1, bool K2Node_DynamicCast_bSuccess_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.SetUpBookChildActor"));
    struct Params_SetUpBookChildActor {
        UObject* ChildActor; // 0x0
        TArray<USplineComponent*> SplineArray; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        USplineComponent* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x28
        char pad_2c[0x4];
        ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books_1; // 0x40
        bool K2Node_DynamicCast_bSuccess_1; // 0x48
        char pad_49[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x54
    }; // Size: 0x58
    Params_SetUpBookChildActor params{};
    params.ChildActor = (UObject*)ChildActor;
    params.SplineArray = (TArray<USplineComponent*>)SplineArray;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (USplineComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Self_Arranging_Books = (ABP_SelfArrangingBooks_C*)K2Node_DynamicCast_AsBP_Self_Arranging_Books;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBP_Self_Arranging_Books_1 = (ABP_SelfArrangingBooks_C*)K2Node_DynamicCast_AsBP_Self_Arranging_Books_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    SplineArray = params.SplineArray;
}
void ABP_Sanc_HubCorner_03_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubCorner_03.BP_Sanc_HubCorner_03_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}

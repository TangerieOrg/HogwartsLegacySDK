#include "AActor.hpp"
#include "AStation.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FDateTime.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTS_Student_FreeTime_C.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBTS_Student_FreeTime_C::OnQueryFinishedEvent_Event_0(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.OnQueryFinishedEvent_Event_0"));
    struct Params_OnQueryFinishedEvent_Event_0 {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_OnQueryFinishedEvent_Event_0 params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
UBTS_Student_FreeTime_C* UBTS_Student_FreeTime_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C");
    return (UBTS_Student_FreeTime_C*)res;
}
void UBTS_Student_FreeTime_C::ServiceEnd0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::Nevermind(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.Nevermind"));
    struct Params_Nevermind {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Nevermind params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::ExcuseMe(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.ExcuseMe"));
    struct Params_ExcuseMe {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ExcuseMe params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::OnQueryFinishedEvent_Event_1(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.OnQueryFinishedEvent_Event_1"));
    struct Params_OnQueryFinishedEvent_Event_1 {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_OnQueryFinishedEvent_Event_1 params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::ServiceBegin0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::ReceiveSearchStart(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.ReceiveSearchStart"));
    struct Params_ReceiveSearchStart {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveSearchStart params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_FreeTime_C::ExecuteUbergraph_BTS_Student_FreeTime(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, UObject* K2Node_CustomEvent_Caller, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetItemScore_ReturnValue, UObject* K2Node_CustomEvent_Caller_1, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, AActor* K2Node_Event_OwnerActor_2, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors_1, bool CallFunc_GetQueryResultsAsActors_ReturnValue_1, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, AStation* K2Node_DynamicCast_AsStation_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_FreeTime.BTS_Student_FreeTime_C.ExecuteUbergraph_BTS_Student_FreeTime"));
    struct Params_ExecuteUbergraph_BTS_Student_FreeTime {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        UObject* K2Node_CustomEvent_Caller; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x14
        UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1; // 0x18
        EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus_1; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x21
        char pad_22[0x6];
        TArray<AActor*> CallFunc_GetQueryResultsAsActors_ResultActors; // 0x28
        bool CallFunc_GetQueryResultsAsActors_ReturnValue; // 0x38
        char pad_39[0x7];
        AActor* CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        char pad_4c[0x4];
        AStation* K2Node_DynamicCast_AsStation; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        char pad_59[0x3];
        float CallFunc_GetItemScore_ReturnValue; // 0x5c
        UObject* K2Node_CustomEvent_Caller_1; // 0x60
        FString CallFunc_Conv_FloatToString_ReturnValue; // 0x68
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x78
        AActor* K2Node_Event_OwnerActor_2; // 0x88
        AActor* K2Node_Event_OwnerActor_1; // 0x90
        AActor* K2Node_Event_OwnerActor; // 0x98
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xa4
        char pad_a5[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xa8
        int32_t Temp_int_Array_Index_Variable_1; // 0xac
        UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance; // 0xb0
        EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus; // 0xb8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0xb9
        char pad_ba[0x6];
        TArray<AActor*> CallFunc_GetQueryResultsAsActors_ResultActors_1; // 0xc0
        bool CallFunc_GetQueryResultsAsActors_ReturnValue_1; // 0xd0
        char pad_d1[0x7];
        AActor* CallFunc_Array_Get_Item_1; // 0xd8
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xe0
        char pad_e4[0x4];
        AStation* K2Node_DynamicCast_AsStation_1; // 0xe8
        bool K2Node_DynamicCast_bSuccess_1; // 0xf0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xf1
    }; // Size: 0xf2
    Params_ExecuteUbergraph_BTS_Student_FreeTime params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.K2Node_CustomEvent_Caller = (UObject*)K2Node_CustomEvent_Caller;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.K2Node_CustomEvent_QueryInstance_1 = (UEnvQueryInstanceBlueprintWrapper*)K2Node_CustomEvent_QueryInstance_1;
    params.K2Node_CustomEvent_QueryStatus_1 = (EEnvQueryStatus::Type)K2Node_CustomEvent_QueryStatus_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_GetQueryResultsAsActors_ResultActors = (TArray<AActor*>)CallFunc_GetQueryResultsAsActors_ResultActors;
    params.CallFunc_GetQueryResultsAsActors_ReturnValue = (bool)CallFunc_GetQueryResultsAsActors_ReturnValue;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_DynamicCast_AsStation = (AStation*)K2Node_DynamicCast_AsStation;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetItemScore_ReturnValue = (float)CallFunc_GetItemScore_ReturnValue;
    params.K2Node_CustomEvent_Caller_1 = (UObject*)K2Node_CustomEvent_Caller_1;
    params.CallFunc_Conv_FloatToString_ReturnValue = (FString)CallFunc_Conv_FloatToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_Event_OwnerActor_2 = (AActor*)K2Node_Event_OwnerActor_2;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_CustomEvent_QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)K2Node_CustomEvent_QueryInstance;
    params.K2Node_CustomEvent_QueryStatus = (EEnvQueryStatus::Type)K2Node_CustomEvent_QueryStatus;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_GetQueryResultsAsActors_ResultActors_1 = (TArray<AActor*>)CallFunc_GetQueryResultsAsActors_ResultActors_1;
    params.CallFunc_GetQueryResultsAsActors_ReturnValue_1 = (bool)CallFunc_GetQueryResultsAsActors_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (AActor*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_DynamicCast_AsStation_1 = (AStation*)K2Node_DynamicCast_AsStation_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetQueryResultsAsActors_ResultActors = params.CallFunc_GetQueryResultsAsActors_ResultActors;
    CallFunc_GetQueryResultsAsActors_ResultActors_1 = params.CallFunc_GetQueryResultsAsActors_ResultActors_1;
}

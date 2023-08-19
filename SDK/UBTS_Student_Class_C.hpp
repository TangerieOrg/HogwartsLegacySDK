#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FDateTime.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_AvaAITree.hpp"
class UObject;
class AActor;
class UEnvQueryInstanceBlueprintWrapper;
class AStation;
#pragma pack(push, 1)
class UBTS_Student_Class_C : public UBTService_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    bool DisplayRelationship; // 0xd8
    bool DisplaySocialIntention; // 0xd9
    char pad_da[0x6];
    FDateTime TimeOfNextActivity; // 0xe0
    float DurationOfCurrentActivity; // 0xe8
    char pad_ec[0x4];
    static UBTS_Student_Class_C* StaticClass();
    void ExcuseMe(UObject* Caller);
    void ServiceEnd0(AActor* OwnerActor);
    void ReceiveSearchStart(AActor* OwnerActor);
    void OnQueryFinishedEvent_Event_1(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void Nevermind(UObject* Caller);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ServiceBegin0(AActor* OwnerActor);
    void OnQueryFinishedEvent_Event_0(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTS_Student_Class(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, AActor* K2Node_Event_OwnerActor_2, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_CustomEvent_Caller, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AActor* K2Node_Event_OwnerActor, int32_t Temp_int_Loop_Counter_Variable_1, AActor* K2Node_Event_OwnerActor_3, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, UObject* K2Node_CustomEvent_Caller_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors_1, bool CallFunc_GetQueryResultsAsActors_ReturnValue_1, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, AStation* K2Node_DynamicCast_AsStation_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}; // Size: 0xf0
#pragma pack(pop)

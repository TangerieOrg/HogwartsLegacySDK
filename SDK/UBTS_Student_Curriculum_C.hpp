#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "EGoalStatusFlags\Type.hpp"
#include "EStationInteraction.hpp"
#include "FGameplayTag.hpp"
#include "FGoalStatus.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FScheduleEntry.hpp"
#include "FTimeEvent.hpp"
#include "UBTService_SocialReasoning.hpp"
class UScheduledEntity;
class UObject;
class UBlackboardComponent;
class ASocialReasoning;
class UStationComponent;
class AActor;
struct FQueryFinishedData;
class UEnvQueryInstanceBlueprintWrapper;
#pragma pack(push, 1)
class UBTS_Student_Curriculum_C : public UBTService_SocialReasoning {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    UScheduledEntity* ScheduledEntity; // 0xd8
    EGoalStatusFlags::Type FutureGoalStatus; // 0xe0
    char pad_e1[0x3];
    FName StationNeedingServiceKey; // 0xe4
    FName StationActionNameKey; // 0xec
    FName StationConnectionIndexKey; // 0xf4
    FName StationInteractionTypeKey; // 0xfc
    FName StationUseDurationKey; // 0x104
    FName SkipValidationForTeleportToStation; // 0x10c
    char pad_114[0x4];
    static UBTS_Student_Curriculum_C* StaticClass();
    void Set_SubBehavior(FGameplayTag CallFunc_GetActiveLeafNodeTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
    void Set_New_Behavior(bool CallFunc_GetGoalActivity_ActivityIsValid, FScheduleEntry CallFunc_GetGoalActivity_RequestedActivity, bool K2Node_SwitchName_CmpSuccess);
    void Chat(ASocialReasoning* SocialReasoning);
    void InteractionCallback(ASocialReasoning* SocialReasoning, UStationComponent* InStation);
    void Companionship(ASocialReasoning* SocialReasoning);
    void Combat(ASocialReasoning* SocialReasoning);
    void PlayerSighted(ASocialReasoning* SocialReasoning);
    void ServiceBegin(AActor* OwnerActor);
    void StationNeedsService(UObject* Caller, UStationComponent* StationComponent);
    void PerformTask_WaitForPlayer(ASocialReasoning* SocialReasoning);
    void PerformTask_MoveToLocation(ASocialReasoning* SocialReasoning);
    void Think(ASocialReasoning* SocialReasoning, FTimeEvent& TimeEvent);
    void PerformTask_MoveToStation(ASocialReasoning* SocialReasoning, UStationComponent* InStation, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex, float InStationUseDuration, bool InSkipValidationForTeleport);
    void RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void FindStations_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void FindSocialReasonings_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTS_Student_Curriculum(int32_t EntryPoint, ASocialReasoning* K2Node_Event_SocialReasoning_10, ASocialReasoning* K2Node_Event_SocialReasoning_9, UStationComponent* K2Node_Event_InStation_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning_8, ASocialReasoning* K2Node_Event_SocialReasoning_7, ASocialReasoning* K2Node_Event_SocialReasoning_6, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, AActor* K2Node_Event_OwnerActor, UObject* K2Node_CustomEvent_Caller, UStationComponent* K2Node_CustomEvent_StationComponent, int32_t CallFunc_Conv_ByteToInt_ReturnValue_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning_5, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, ASocialReasoning* K2Node_Event_SocialReasoning_4, ASocialReasoning* K2Node_Event_SocialReasoning_3, FTimeEvent K2Node_Event_TimeEvent, UObject* CallFunc_GetReasoner_ReturnValue_1, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity_1, bool K2Node_DynamicCast_bSuccess_2, FGoalStatus CallFunc_GetGoalStatus_GoalStatus);
}; // Size: 0x118
#pragma pack(pop)

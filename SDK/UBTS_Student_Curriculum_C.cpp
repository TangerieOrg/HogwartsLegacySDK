#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "EGoalStatusFlags\Type.hpp"
#include "EStationInteraction.hpp"
#include "FGameplayTag.hpp"
#include "FGoalStatus.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FQueryFinishedData.hpp"
#include "FScheduleEntry.hpp"
#include "FTimeEvent.hpp"
#include "UBTS_Student_Curriculum_C.hpp"
#include "UBTService_SocialReasoning.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
#include "UStationComponent.hpp"
void UBTS_Student_Curriculum_C::InteractionCallback(ASocialReasoning* SocialReasoning, UStationComponent* InStation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.InteractionCallback"));
    struct Params_InteractionCallback {
        ASocialReasoning* SocialReasoning; // 0x0
        UStationComponent* InStation; // 0x8
    }; // Size: 0x10
    Params_InteractionCallback params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.InStation = (UStationComponent*)InStation;
    ProcessEvent(func, &params);
}
UBTS_Student_Curriculum_C* UBTS_Student_Curriculum_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C");
    return (UBTS_Student_Curriculum_C*)res;
}
void UBTS_Student_Curriculum_C::PerformTask_MoveToLocation(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_MoveToLocation"));
    struct Params_PerformTask_MoveToLocation {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PerformTask_MoveToLocation params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Set_SubBehavior(FGameplayTag CallFunc_GetActiveLeafNodeTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Set SubBehavior"));
    struct Params_Set_SubBehavior {
        FGameplayTag CallFunc_GetActiveLeafNodeTag_ReturnValue; // 0x0
        bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess; // 0x8
    }; // Size: 0x9
    Params_Set_SubBehavior params{};
    params.CallFunc_GetActiveLeafNodeTag_ReturnValue = (FGameplayTag)CallFunc_GetActiveLeafNodeTag_ReturnValue;
    params.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = (bool)GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Companionship(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Companionship"));
    struct Params_Companionship {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Companionship params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Set_New_Behavior(bool CallFunc_GetGoalActivity_ActivityIsValid, FScheduleEntry CallFunc_GetGoalActivity_RequestedActivity, bool K2Node_SwitchName_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Set New Behavior"));
    struct Params_Set_New_Behavior {
        bool CallFunc_GetGoalActivity_ActivityIsValid; // 0x0
        char pad_1[0x7];
        FScheduleEntry CallFunc_GetGoalActivity_RequestedActivity; // 0x8
        bool K2Node_SwitchName_CmpSuccess; // 0x100
    }; // Size: 0x101
    Params_Set_New_Behavior params{};
    params.CallFunc_GetGoalActivity_ActivityIsValid = (bool)CallFunc_GetGoalActivity_ActivityIsValid;
    params.CallFunc_GetGoalActivity_RequestedActivity = (FScheduleEntry)CallFunc_GetGoalActivity_RequestedActivity;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Chat(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Chat"));
    struct Params_Chat {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Chat params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::PlayerSighted(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.PlayerSighted"));
    struct Params_PlayerSighted {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PlayerSighted params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Combat(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Combat"));
    struct Params_Combat {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Combat params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::StationNeedsService(UObject* Caller, UStationComponent* StationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.StationNeedsService"));
    struct Params_StationNeedsService {
        UObject* Caller; // 0x0
        UStationComponent* StationComponent; // 0x8
    }; // Size: 0x10
    Params_StationNeedsService params{};
    params.Caller = (UObject*)Caller;
    params.StationComponent = (UStationComponent*)StationComponent;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::PerformTask_WaitForPlayer(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_WaitForPlayer"));
    struct Params_PerformTask_WaitForPlayer {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PerformTask_WaitForPlayer params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::Think(ASocialReasoning* SocialReasoning, FTimeEvent& TimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.Think"));
    struct Params_Think {
        ASocialReasoning* SocialReasoning; // 0x0
        FTimeEvent TimeEvent; // 0x8
    }; // Size: 0x38
    Params_Think params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.TimeEvent = (FTimeEvent)TimeEvent;
    ProcessEvent(func, &params);
    TimeEvent = params.TimeEvent;
}
void UBTS_Student_Curriculum_C::PerformTask_MoveToStation(ASocialReasoning* SocialReasoning, UStationComponent* InStation, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex, float InStationUseDuration, bool InSkipValidationForTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.PerformTask_MoveToStation"));
    struct Params_PerformTask_MoveToStation {
        ASocialReasoning* SocialReasoning; // 0x0
        UStationComponent* InStation; // 0x8
        EStationInteraction InStationInteractionType; // 0x10
        char pad_11[0x3];
        FName InActionName; // 0x14
        int32_t InConnectionIndex; // 0x1c
        float InStationUseDuration; // 0x20
        bool InSkipValidationForTeleport; // 0x24
    }; // Size: 0x25
    Params_PerformTask_MoveToStation params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.InStation = (UStationComponent*)InStation;
    params.InStationInteractionType = (EStationInteraction)InStationInteractionType;
    params.InActionName = (FName)InActionName;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    params.InStationUseDuration = (float)InStationUseDuration;
    params.InSkipValidationForTeleport = (bool)InSkipValidationForTeleport;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.RunEQS_FindStations"));
    struct Params_RunEQS_FindStations {
        ASocialReasoning* SocialReasoning; // 0x0
        EEnvQueryRunMode::Type RunMode; // 0x8
        char pad_9[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x10
    }; // Size: 0x20
    Params_RunEQS_FindStations params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void UBTS_Student_Curriculum_C::FindStations_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.FindStations_QueryFinished"));
    struct Params_FindStations_QueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_FindStations_QueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.RunEQS_FindSocialReasonings"));
    struct Params_RunEQS_FindSocialReasonings {
        ASocialReasoning* SocialReasoning; // 0x0
        EEnvQueryRunMode::Type RunMode; // 0x8
        char pad_9[0x7];
        FQueryFinishedData QueryFinishedDelegate; // 0x10
    }; // Size: 0x20
    Params_RunEQS_FindSocialReasonings params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.RunMode = (EEnvQueryRunMode::Type)RunMode;
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void UBTS_Student_Curriculum_C::FindSocialReasonings_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/BTS_Student_Curriculum.BTS_Student_Curriculum_C.FindSocialReasonings_QueryFinished"));
    struct Params_FindSocialReasonings_QueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_FindSocialReasonings_QueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
void UBTS_Student_Curriculum_C::ExecuteUbergraph_BTS_Student_Curriculum(int32_t EntryPoint, ASocialReasoning* K2Node_Event_SocialReasoning_10, ASocialReasoning* K2Node_Event_SocialReasoning_9, UStationComponent* K2Node_Event_InStation_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning_8, ASocialReasoning* K2Node_Event_SocialReasoning_7, ASocialReasoning* K2Node_Event_SocialReasoning_6, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, AActor* K2Node_Event_OwnerActor, UObject* K2Node_CustomEvent_Caller, UStationComponent* K2Node_CustomEvent_StationComponent, int32_t CallFunc_Conv_ByteToInt_ReturnValue_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning_5, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, ASocialReasoning* K2Node_Event_SocialReasoning_4, ASocialReasoning* K2Node_Event_SocialReasoning_3, FTimeEvent K2Node_Event_TimeEvent, UObject* CallFunc_GetReasoner_ReturnValue_1, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity_1, bool K2Node_DynamicCast_bSuccess_2, FGoalStatus CallFunc_GetGoalStatus_GoalStatus) {}

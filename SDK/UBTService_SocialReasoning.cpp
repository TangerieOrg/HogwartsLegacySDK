#include "ASocialReasoning.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "EStationInteraction.hpp"
#include "FQueryFinishedData.hpp"
#include "FTimeEvent.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UBTService_SocialReasoning.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
#include "UStationComponent.hpp"
void UBTService_SocialReasoning::Think(ASocialReasoning* SocialReasoning, FTimeEvent& TimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.Think"));
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
UBTService_SocialReasoning* UBTService_SocialReasoning::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_SocialReasoning");
    return (UBTService_SocialReasoning*)res;
}
void UBTService_SocialReasoning::RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.RunEQS_FindStations"));
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
void UBTService_SocialReasoning::PerformTask_WaitForPlayer(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.PerformTask_WaitForPlayer"));
    struct Params_PerformTask_WaitForPlayer {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PerformTask_WaitForPlayer params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.RunEQS_FindSocialReasonings"));
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
void UBTService_SocialReasoning::PlayerSighted(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.PlayerSighted"));
    struct Params_PlayerSighted {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PlayerSighted params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::PerformTask_MoveToStation(ASocialReasoning* SocialReasoning, UStationComponent* InStation, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex, float InStationUseDuration, bool InSkipValidationForTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.PerformTask_MoveToStation"));
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
void UBTService_SocialReasoning::PerformTask_MoveToLocation(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.PerformTask_MoveToLocation"));
    struct Params_PerformTask_MoveToLocation {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_PerformTask_MoveToLocation params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::InteractionCallback(ASocialReasoning* SocialReasoning, UStationComponent* InStation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.InteractionCallback"));
    struct Params_InteractionCallback {
        ASocialReasoning* SocialReasoning; // 0x0
        UStationComponent* InStation; // 0x8
    }; // Size: 0x10
    Params_InteractionCallback params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    params.InStation = (UStationComponent*)InStation;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::ExecuteEQSQueryFinished(FQueryFinishedData& QueryFinishedDelegate, UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.ExecuteEQSQueryFinished"));
    struct Params_ExecuteEQSQueryFinished {
        FQueryFinishedData QueryFinishedDelegate; // 0x0
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x10
        EEnvQueryStatus::Type QueryStatus; // 0x18
    }; // Size: 0x19
    Params_ExecuteEQSQueryFinished params{};
    params.QueryFinishedDelegate = (FQueryFinishedData)QueryFinishedDelegate;
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
    QueryFinishedDelegate = params.QueryFinishedDelegate;
}
void UBTService_SocialReasoning::Companionship(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.Companionship"));
    struct Params_Companionship {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Companionship params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::Combat(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.Combat"));
    struct Params_Combat {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Combat params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}
void UBTService_SocialReasoning::Chat(ASocialReasoning* SocialReasoning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BTService_SocialReasoning.Chat"));
    struct Params_Chat {
        ASocialReasoning* SocialReasoning; // 0x0
    }; // Size: 0x8
    Params_Chat params{};
    params.SocialReasoning = (ASocialReasoning*)SocialReasoning;
    ProcessEvent(func, &params);
}

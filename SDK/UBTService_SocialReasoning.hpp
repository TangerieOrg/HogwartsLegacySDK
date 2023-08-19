#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "EStationInteraction.hpp"
#include "UBTService_AvaAITree.hpp"
class ASocialReasoning;
struct FTimeEvent;
struct FQueryFinishedData;
class UStationComponent;
class UEnvQueryInstanceBlueprintWrapper;
#pragma pack(push, 1)
class UBTService_SocialReasoning : public UBTService_AvaAITree {
public:
    static UBTService_SocialReasoning* StaticClass();
    void Think(ASocialReasoning* SocialReasoning, FTimeEvent& TimeEvent);
    void RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void PlayerSighted(ASocialReasoning* SocialReasoning);
    void PerformTask_WaitForPlayer(ASocialReasoning* SocialReasoning);
    void PerformTask_MoveToStation(ASocialReasoning* SocialReasoning, UStationComponent* InStation, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex, float InStationUseDuration, bool InSkipValidationForTeleport);
    void PerformTask_MoveToLocation(ASocialReasoning* SocialReasoning);
    void InteractionCallback(ASocialReasoning* SocialReasoning, UStationComponent* InStation);
    void ExecuteEQSQueryFinished(FQueryFinishedData& QueryFinishedDelegate, UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void Companionship(ASocialReasoning* SocialReasoning);
    void Combat(ASocialReasoning* SocialReasoning);
    void Chat(ASocialReasoning* SocialReasoning);
}; // Size: 0xd0
#pragma pack(pop)

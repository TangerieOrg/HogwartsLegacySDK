#pragma once
#include <cstdint>
#include "EKnowledgeAction.hpp"
#include "EKnowledgeLevel.hpp"
#include "FKnowledgeAuthority.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UKnowledgeManager : public UObject {
public:
    char pad_28[0x3d8];
    static UKnowledgeManager* StaticClass();
    void UpdateGoldChestChallenge(AActor* Chest);
    void OnSaveGameLoaded();
    void OnPreGameLoad();
    void OnNewGame();
    void OnCurtainRaised();
    void KnowledgeLevelSet(FString KnowledgeCard, FString Level);
    bool IsSubjectCompletelyKnown(FName ObjectID);
    FName IsKnowledgeSubject(FName ObjectID, bool IsRecursion);
    FName IsGroupMember(FName ObjectID);
    bool IsFactKnown(FName ObjectID, FName FactColumnID, EKnowledgeLevel& KnowledgeLevel);
    bool IsCollectionItemObtained(FName CollectionItem);
    bool IsCollectionActionItemObtained(FName KnowledgeSubject, EKnowledgeAction KnowledgeAction);
    float GetSubjectKnowledgePoints(FName ObjectID);
    FName GetSubjectKnowledgeCategory(FName ObjectID);
    FName GetRegionKnowledgeCardFromLocation(FVector Location);
    EKnowledgeLevel GetPlayerKnowledgeLevel(FName ObjectID, FName FactColumnID);
    FName GetNameFromKnowledgeLevel(EKnowledgeLevel KnowledgeLevel);
    TArray<FKnowledgeAuthority> GetKnowledgeAuthority(FName KnowledgeSubjectID);
    TArray<FName> GetGroupMembers(FName ObjectID);
    float GetFieldGuideCompletionPercentage();
    int32_t GetCompanionLevel(FString CharacterID);
    void GetCollections();
    TArray<FName> GetAllKnowledgeCardsByCategory(FString Category);
    TArray<FName> GetAllKnowledgeCards();
    static UKnowledgeManager* Get();
    void GainKnowledgeFromNPC(FName ObjectID, FName NPCID, bool InDisplayTicker);
    void GainKnowledgeFromAction(FName ObjectID, EKnowledgeAction KnowledgeAction, bool InDisplayTicker);
    void GainKnowledgeFact(FName ObjectID, FName FactColumnID, EKnowledgeAction KnowledgeAction, bool InDisplayTicker);
    void CompleteAllKnowledgeCards();
    void CompleteAllCollections();
    void AddKnowledgePointsToCard(FString KnowledgeCard, float PointsToAdd);
    void AddKnowledgeFromInventory(FString Level);
}; // Size: 0x400
#pragma pack(pop)

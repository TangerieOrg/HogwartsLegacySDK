#include "AActor.hpp"
#include "EKnowledgeAction.hpp"
#include "EKnowledgeLevel.hpp"
#include "FKnowledgeAuthority.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UKnowledgeManager.hpp"
#include "UObject.hpp"
UKnowledgeManager* UKnowledgeManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.KnowledgeManager");
    return (UKnowledgeManager*)res;
}
void UKnowledgeManager::UpdateGoldChestChallenge(AActor* Chest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.UpdateGoldChestChallenge"));
    struct Params_UpdateGoldChestChallenge {
        AActor* Chest; // 0x0
    }; // Size: 0x8
    Params_UpdateGoldChestChallenge params{};
    params.Chest = (AActor*)Chest;
    ProcessEvent(func, &params);
}
FName UKnowledgeManager::IsKnowledgeSubject(FName ObjectID, bool IsRecursion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsKnowledgeSubject"));
    struct Params_IsKnowledgeSubject {
        FName ObjectID; // 0x0
        bool IsRecursion; // 0x8
        char pad_9[0x3];
        FName ReturnValue; // 0xc
    }; // Size: 0x14
    Params_IsKnowledgeSubject params{};
    params.ObjectID = (FName)ObjectID;
    params.IsRecursion = (bool)IsRecursion;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UKnowledgeManager::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UKnowledgeManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
bool UKnowledgeManager::IsCollectionActionItemObtained(FName KnowledgeSubject, EKnowledgeAction KnowledgeAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsCollectionActionItemObtained"));
    struct Params_IsCollectionActionItemObtained {
        FName KnowledgeSubject; // 0x0
        EKnowledgeAction KnowledgeAction; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_IsCollectionActionItemObtained params{};
    params.KnowledgeSubject = (FName)KnowledgeSubject;
    params.KnowledgeAction = (EKnowledgeAction)KnowledgeAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKnowledgeManager::KnowledgeLevelSet(FString KnowledgeCard, FString Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.KnowledgeLevelSet"));
    struct Params_KnowledgeLevelSet {
        FString KnowledgeCard; // 0x0
        FString Level; // 0x10
    }; // Size: 0x20
    Params_KnowledgeLevelSet params{};
    params.KnowledgeCard = (FString)KnowledgeCard;
    params.Level = (FString)Level;
    ProcessEvent(func, &params);
}
void UKnowledgeManager::OnPreGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.OnPreGameLoad"));
    struct Params_OnPreGameLoad {
    }; // Size: 0x0
    Params_OnPreGameLoad params{};
    ProcessEvent(func, &params);
}
void UKnowledgeManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
bool UKnowledgeManager::IsSubjectCompletelyKnown(FName ObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsSubjectCompletelyKnown"));
    struct Params_IsSubjectCompletelyKnown {
        FName ObjectID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSubjectCompletelyKnown params{};
    params.ObjectID = (FName)ObjectID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UKnowledgeManager::IsGroupMember(FName ObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsGroupMember"));
    struct Params_IsGroupMember {
        FName ObjectID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_IsGroupMember params{};
    params.ObjectID = (FName)ObjectID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UKnowledgeManager::GetNameFromKnowledgeLevel(EKnowledgeLevel KnowledgeLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetNameFromKnowledgeLevel"));
    struct Params_GetNameFromKnowledgeLevel {
        EKnowledgeLevel KnowledgeLevel; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetNameFromKnowledgeLevel params{};
    params.KnowledgeLevel = (EKnowledgeLevel)KnowledgeLevel;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UKnowledgeManager::IsFactKnown(FName ObjectID, FName FactColumnID, EKnowledgeLevel& KnowledgeLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsFactKnown"));
    struct Params_IsFactKnown {
        FName ObjectID; // 0x0
        FName FactColumnID; // 0x8
        EKnowledgeLevel KnowledgeLevel; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_IsFactKnown params{};
    params.ObjectID = (FName)ObjectID;
    params.FactColumnID = (FName)FactColumnID;
    params.KnowledgeLevel = (EKnowledgeLevel)KnowledgeLevel;
    ProcessEvent(func, &params);
    KnowledgeLevel = params.KnowledgeLevel;
    return (bool)params.ReturnValue;
}
bool UKnowledgeManager::IsCollectionItemObtained(FName CollectionItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.IsCollectionItemObtained"));
    struct Params_IsCollectionItemObtained {
        FName CollectionItem; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCollectionItemObtained params{};
    params.CollectionItem = (FName)CollectionItem;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKnowledgeManager::GetSubjectKnowledgePoints(FName ObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetSubjectKnowledgePoints"));
    struct Params_GetSubjectKnowledgePoints {
        FName ObjectID; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSubjectKnowledgePoints params{};
    params.ObjectID = (FName)ObjectID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UKnowledgeManager::GetSubjectKnowledgeCategory(FName ObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetSubjectKnowledgeCategory"));
    struct Params_GetSubjectKnowledgeCategory {
        FName ObjectID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSubjectKnowledgeCategory params{};
    params.ObjectID = (FName)ObjectID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UKnowledgeManager::GetRegionKnowledgeCardFromLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetRegionKnowledgeCardFromLocation"));
    struct Params_GetRegionKnowledgeCardFromLocation {
        FVector Location; // 0x0
        FName ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetRegionKnowledgeCardFromLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UKnowledgeManager::GainKnowledgeFromAction(FName ObjectID, EKnowledgeAction KnowledgeAction, bool InDisplayTicker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GainKnowledgeFromAction"));
    struct Params_GainKnowledgeFromAction {
        FName ObjectID; // 0x0
        EKnowledgeAction KnowledgeAction; // 0x8
        bool InDisplayTicker; // 0x9
    }; // Size: 0xa
    Params_GainKnowledgeFromAction params{};
    params.ObjectID = (FName)ObjectID;
    params.KnowledgeAction = (EKnowledgeAction)KnowledgeAction;
    params.InDisplayTicker = (bool)InDisplayTicker;
    ProcessEvent(func, &params);
}
EKnowledgeLevel UKnowledgeManager::GetPlayerKnowledgeLevel(FName ObjectID, FName FactColumnID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetPlayerKnowledgeLevel"));
    struct Params_GetPlayerKnowledgeLevel {
        FName ObjectID; // 0x0
        FName FactColumnID; // 0x8
        EKnowledgeLevel ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPlayerKnowledgeLevel params{};
    params.ObjectID = (FName)ObjectID;
    params.FactColumnID = (FName)FactColumnID;
    ProcessEvent(func, &params);
    return (EKnowledgeLevel)params.ReturnValue;
}
TArray<FKnowledgeAuthority> UKnowledgeManager::GetKnowledgeAuthority(FName KnowledgeSubjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetKnowledgeAuthority"));
    struct Params_GetKnowledgeAuthority {
        FName KnowledgeSubjectID; // 0x0
        TArray<FKnowledgeAuthority> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetKnowledgeAuthority params{};
    params.KnowledgeSubjectID = (FName)KnowledgeSubjectID;
    ProcessEvent(func, &params);
    return (TArray<FKnowledgeAuthority>)params.ReturnValue;
}
void UKnowledgeManager::GainKnowledgeFact(FName ObjectID, FName FactColumnID, EKnowledgeAction KnowledgeAction, bool InDisplayTicker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GainKnowledgeFact"));
    struct Params_GainKnowledgeFact {
        FName ObjectID; // 0x0
        FName FactColumnID; // 0x8
        EKnowledgeAction KnowledgeAction; // 0x10
        bool InDisplayTicker; // 0x11
    }; // Size: 0x12
    Params_GainKnowledgeFact params{};
    params.ObjectID = (FName)ObjectID;
    params.FactColumnID = (FName)FactColumnID;
    params.KnowledgeAction = (EKnowledgeAction)KnowledgeAction;
    params.InDisplayTicker = (bool)InDisplayTicker;
    ProcessEvent(func, &params);
}
TArray<FName> UKnowledgeManager::GetGroupMembers(FName ObjectID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetGroupMembers"));
    struct Params_GetGroupMembers {
        FName ObjectID; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetGroupMembers params{};
    params.ObjectID = (FName)ObjectID;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
float UKnowledgeManager::GetFieldGuideCompletionPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetFieldGuideCompletionPercentage"));
    struct Params_GetFieldGuideCompletionPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFieldGuideCompletionPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UKnowledgeManager::GetCompanionLevel(FString CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetCompanionLevel"));
    struct Params_GetCompanionLevel {
        FString CharacterID; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetCompanionLevel params{};
    params.CharacterID = (FString)CharacterID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKnowledgeManager::GetCollections() {}
TArray<FName> UKnowledgeManager::GetAllKnowledgeCardsByCategory(FString Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetAllKnowledgeCardsByCategory"));
    struct Params_GetAllKnowledgeCardsByCategory {
        FString Category; // 0x0
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetAllKnowledgeCardsByCategory params{};
    params.Category = (FString)Category;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UKnowledgeManager::GetAllKnowledgeCards() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GetAllKnowledgeCards"));
    struct Params_GetAllKnowledgeCards {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllKnowledgeCards params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
UKnowledgeManager* UKnowledgeManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.Get"));
    struct Params_Get {
        UKnowledgeManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UKnowledgeManager*)params.ReturnValue;
}
void UKnowledgeManager::GainKnowledgeFromNPC(FName ObjectID, FName NPCID, bool InDisplayTicker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.GainKnowledgeFromNPC"));
    struct Params_GainKnowledgeFromNPC {
        FName ObjectID; // 0x0
        FName NPCID; // 0x8
        bool InDisplayTicker; // 0x10
    }; // Size: 0x11
    Params_GainKnowledgeFromNPC params{};
    params.ObjectID = (FName)ObjectID;
    params.NPCID = (FName)NPCID;
    params.InDisplayTicker = (bool)InDisplayTicker;
    ProcessEvent(func, &params);
}
void UKnowledgeManager::CompleteAllKnowledgeCards() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.CompleteAllKnowledgeCards"));
    struct Params_CompleteAllKnowledgeCards {
    }; // Size: 0x0
    Params_CompleteAllKnowledgeCards params{};
    ProcessEvent(func, &params);
}
void UKnowledgeManager::CompleteAllCollections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.CompleteAllCollections"));
    struct Params_CompleteAllCollections {
    }; // Size: 0x0
    Params_CompleteAllCollections params{};
    ProcessEvent(func, &params);
}
void UKnowledgeManager::AddKnowledgePointsToCard(FString KnowledgeCard, float PointsToAdd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.AddKnowledgePointsToCard"));
    struct Params_AddKnowledgePointsToCard {
        FString KnowledgeCard; // 0x0
        float PointsToAdd; // 0x10
    }; // Size: 0x14
    Params_AddKnowledgePointsToCard params{};
    params.KnowledgeCard = (FString)KnowledgeCard;
    params.PointsToAdd = (float)PointsToAdd;
    ProcessEvent(func, &params);
}
void UKnowledgeManager::AddKnowledgeFromInventory(FString Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.KnowledgeManager.AddKnowledgeFromInventory"));
    struct Params_AddKnowledgeFromInventory {
        FString Level; // 0x0
    }; // Size: 0x10
    Params_AddKnowledgeFromInventory params{};
    params.Level = (FString)Level;
    ProcessEvent(func, &params);
}

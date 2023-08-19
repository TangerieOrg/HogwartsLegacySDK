#pragma once
#include <cstdint>
#include "EStationInteraction.hpp"
#include "FFactInformation.hpp"
#include "FPeopleInformation.hpp"
#include "FStationQueryData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UStationComponent;
class AActor;
class UObject;
struct FFactSheetResult;
#pragma pack(push, 1)
class UUI_DB_Library : public UBlueprintFunctionLibrary {
public:
    static UUI_DB_Library* StaticClass();
    static bool UnlockStationBP(UStationComponent* StationComponent);
    static bool TargetHasConversationEntries(FName TargetActor, AActor* InTargetActor, bool& MissionInteraction);
    static void SetSystemSubtitles(bool SubtitlesEnabled);
    static bool LockStation(UStationComponent* StationComponent, UObject* PlayerActor);
    static TArray<FString> GetUsabilityMissionList();
    static bool GetSystemSubtitles();
    static FName GetSubtypeFromSubjectName(FName Subject);
    static FString GetSubjectCategoryFromSubject(FName Subject);
    static bool GetSocialActionChoicesBP(TArray<FStationQueryData>& StationQueryData, UStationComponent* StationComponent, UObject* RequestingObject);
    static bool GetRichPaperData(FString RichPaperID, FString sender, FString& o_richPaperType, FString& o_imageName, FString& o_headerTextKey, FString& o_bodyTextKey, FString& o_footerTextKey);
    static int32_t GetMaxHealthForLevel(int32_t Level);
    static void GetLevelRequiermentsForItem(FString Item, int32_t& outLevel, bool& outUsable);
    static bool GetIsCustomizable(FString SubtypeID);
    static FName GetHouseIDFromSubjectName(FName Subject);
    static float GetHealthCooldown();
    static TArray<FName> GetFrontendLevelList();
    static TArray<FName> GetDeveloperLevelList();
    static void GetDefaultInventoryHolderID(FString Item, FString& HolderID);
    static void GetCompendiumSubjectFacts(FName Category, FName Subject, FFactSheetResult& FactSheet);
    static void GetCompendiumPeopleSubjects(TArray<FPeopleInformation>& People, TArray<FName>& PeopleNames, int32_t& TotalPeople);
    static void GetCompendiumCategorySubjects(FName Category, TArray<FName>& KnownSubjects, TArray<FName>& UnknownSubjects);
    static void GetCompendiumCategories(TArray<FName>& Categories);
    static void GetActorsKnownSubjects(FName Actor, TArray<FFactInformation>& Subjects, TArray<FFactInformation>& SubjectsAlreadyKnown);
    static bool ChooseStationQueryDataBP(AActor* InActor, UObject* ObjectComponent, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex);
}; // Size: 0x28
#pragma pack(pop)

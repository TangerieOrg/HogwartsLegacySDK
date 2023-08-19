#include "AActor.hpp"
#include "EStationInteraction.hpp"
#include "FFactInformation.hpp"
#include "FFactSheetResult.hpp"
#include "FPeopleInformation.hpp"
#include "FStationQueryData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
#include "UUI_DB_Library.hpp"
UUI_DB_Library* UUI_DB_Library::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UI_DB_Library");
    return (UUI_DB_Library*)res;
}
bool UUI_DB_Library::GetSystemSubtitles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetSystemSubtitles"));
    struct Params_GetSystemSubtitles {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSystemSubtitles params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_DB_Library::LockStation(UStationComponent* StationComponent, UObject* PlayerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.LockStation"));
    struct Params_LockStation {
        UStationComponent* StationComponent; // 0x0
        UObject* PlayerActor; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LockStation params{};
    params.StationComponent = (UStationComponent*)StationComponent;
    params.PlayerActor = (UObject*)PlayerActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_DB_Library::GetSocialActionChoicesBP(TArray<FStationQueryData>& StationQueryData, UStationComponent* StationComponent, UObject* RequestingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetSocialActionChoicesBP"));
    struct Params_GetSocialActionChoicesBP {
        TArray<FStationQueryData> StationQueryData; // 0x0
        UStationComponent* StationComponent; // 0x10
        UObject* RequestingObject; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetSocialActionChoicesBP params{};
    params.StationQueryData = (TArray<FStationQueryData>)StationQueryData;
    params.StationComponent = (UStationComponent*)StationComponent;
    params.RequestingObject = (UObject*)RequestingObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StationQueryData = params.StationQueryData;
    return (bool)params.ReturnValue;
}
bool UUI_DB_Library::UnlockStationBP(UStationComponent* StationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.UnlockStationBP"));
    struct Params_UnlockStationBP {
        UStationComponent* StationComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UnlockStationBP params{};
    params.StationComponent = (UStationComponent*)StationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_DB_Library::TargetHasConversationEntries(FName TargetActor, AActor* InTargetActor, bool& MissionInteraction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.TargetHasConversationEntries"));
    struct Params_TargetHasConversationEntries {
        FName TargetActor; // 0x0
        AActor* InTargetActor; // 0x8
        bool MissionInteraction; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_TargetHasConversationEntries params{};
    params.TargetActor = (FName)TargetActor;
    params.InTargetActor = (AActor*)InTargetActor;
    params.MissionInteraction = (bool)MissionInteraction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MissionInteraction = params.MissionInteraction;
    return (bool)params.ReturnValue;
}
FName UUI_DB_Library::GetSubtypeFromSubjectName(FName Subject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetSubtypeFromSubjectName"));
    struct Params_GetSubtypeFromSubjectName {
        FName Subject; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSubtypeFromSubjectName params{};
    params.Subject = (FName)Subject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UUI_DB_Library::SetSystemSubtitles(bool SubtitlesEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.SetSystemSubtitles"));
    struct Params_SetSystemSubtitles {
        bool SubtitlesEnabled; // 0x0
    }; // Size: 0x1
    Params_SetSystemSubtitles params{};
    params.SubtitlesEnabled = (bool)SubtitlesEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FString> UUI_DB_Library::GetUsabilityMissionList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetUsabilityMissionList"));
    struct Params_GetUsabilityMissionList {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUsabilityMissionList params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UUI_DB_Library::GetSubjectCategoryFromSubject(FName Subject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetSubjectCategoryFromSubject"));
    struct Params_GetSubjectCategoryFromSubject {
        FName Subject; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSubjectCategoryFromSubject params{};
    params.Subject = (FName)Subject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UUI_DB_Library::GetRichPaperData(FString RichPaperID, FString sender, FString& o_richPaperType, FString& o_imageName, FString& o_headerTextKey, FString& o_bodyTextKey, FString& o_footerTextKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetRichPaperData"));
    struct Params_GetRichPaperData {
        FString RichPaperID; // 0x0
        FString sender; // 0x10
        FString o_richPaperType; // 0x20
        FString o_imageName; // 0x30
        FString o_headerTextKey; // 0x40
        FString o_bodyTextKey; // 0x50
        FString o_footerTextKey; // 0x60
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_GetRichPaperData params{};
    params.RichPaperID = (FString)RichPaperID;
    params.sender = (FString)sender;
    params.o_richPaperType = (FString)o_richPaperType;
    params.o_imageName = (FString)o_imageName;
    params.o_headerTextKey = (FString)o_headerTextKey;
    params.o_bodyTextKey = (FString)o_bodyTextKey;
    params.o_footerTextKey = (FString)o_footerTextKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_richPaperType = params.o_richPaperType;
    o_imageName = params.o_imageName;
    o_headerTextKey = params.o_headerTextKey;
    o_bodyTextKey = params.o_bodyTextKey;
    o_footerTextKey = params.o_footerTextKey;
    return (bool)params.ReturnValue;
}
FName UUI_DB_Library::GetHouseIDFromSubjectName(FName Subject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetHouseIDFromSubjectName"));
    struct Params_GetHouseIDFromSubjectName {
        FName Subject; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetHouseIDFromSubjectName params{};
    params.Subject = (FName)Subject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UUI_DB_Library::GetMaxHealthForLevel(int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetMaxHealthForLevel"));
    struct Params_GetMaxHealthForLevel {
        int32_t Level; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetMaxHealthForLevel params{};
    params.Level = (int32_t)Level;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UUI_DB_Library::GetLevelRequiermentsForItem(FString Item, int32_t& outLevel, bool& outUsable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetLevelRequiermentsForItem"));
    struct Params_GetLevelRequiermentsForItem {
        FString Item; // 0x0
        int32_t outLevel; // 0x10
        bool outUsable; // 0x14
    }; // Size: 0x15
    Params_GetLevelRequiermentsForItem params{};
    params.Item = (FString)Item;
    params.outLevel = (int32_t)outLevel;
    params.outUsable = (bool)outUsable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    outLevel = params.outLevel;
    outUsable = params.outUsable;
}
bool UUI_DB_Library::GetIsCustomizable(FString SubtypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetIsCustomizable"));
    struct Params_GetIsCustomizable {
        FString SubtypeID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetIsCustomizable params{};
    params.SubtypeID = (FString)SubtypeID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UUI_DB_Library::GetHealthCooldown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetHealthCooldown"));
    struct Params_GetHealthCooldown {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHealthCooldown params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FName> UUI_DB_Library::GetFrontendLevelList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetFrontendLevelList"));
    struct Params_GetFrontendLevelList {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFrontendLevelList params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FName> UUI_DB_Library::GetDeveloperLevelList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetDeveloperLevelList"));
    struct Params_GetDeveloperLevelList {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDeveloperLevelList params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UUI_DB_Library::GetDefaultInventoryHolderID(FString Item, FString& HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetDefaultInventoryHolderID"));
    struct Params_GetDefaultInventoryHolderID {
        FString Item; // 0x0
        FString HolderID; // 0x10
    }; // Size: 0x20
    Params_GetDefaultInventoryHolderID params{};
    params.Item = (FString)Item;
    params.HolderID = (FString)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HolderID = params.HolderID;
}
void UUI_DB_Library::GetCompendiumSubjectFacts(FName Category, FName Subject, FFactSheetResult& FactSheet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetCompendiumSubjectFacts"));
    struct Params_GetCompendiumSubjectFacts {
        FName Category; // 0x0
        FName Subject; // 0x8
        FFactSheetResult FactSheet; // 0x10
    }; // Size: 0x48
    Params_GetCompendiumSubjectFacts params{};
    params.Category = (FName)Category;
    params.Subject = (FName)Subject;
    params.FactSheet = (FFactSheetResult)FactSheet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FactSheet = params.FactSheet;
}
void UUI_DB_Library::GetCompendiumPeopleSubjects(TArray<FPeopleInformation>& People, TArray<FName>& PeopleNames, int32_t& TotalPeople) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetCompendiumPeopleSubjects"));
    struct Params_GetCompendiumPeopleSubjects {
        TArray<FPeopleInformation> People; // 0x0
        TArray<FName> PeopleNames; // 0x10
        int32_t TotalPeople; // 0x20
    }; // Size: 0x24
    Params_GetCompendiumPeopleSubjects params{};
    params.People = (TArray<FPeopleInformation>)People;
    params.PeopleNames = (TArray<FName>)PeopleNames;
    params.TotalPeople = (int32_t)TotalPeople;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    People = params.People;
    PeopleNames = params.PeopleNames;
    TotalPeople = params.TotalPeople;
}
void UUI_DB_Library::GetCompendiumCategorySubjects(FName Category, TArray<FName>& KnownSubjects, TArray<FName>& UnknownSubjects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetCompendiumCategorySubjects"));
    struct Params_GetCompendiumCategorySubjects {
        FName Category; // 0x0
        TArray<FName> KnownSubjects; // 0x8
        TArray<FName> UnknownSubjects; // 0x18
    }; // Size: 0x28
    Params_GetCompendiumCategorySubjects params{};
    params.Category = (FName)Category;
    params.KnownSubjects = (TArray<FName>)KnownSubjects;
    params.UnknownSubjects = (TArray<FName>)UnknownSubjects;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    KnownSubjects = params.KnownSubjects;
    UnknownSubjects = params.UnknownSubjects;
}
void UUI_DB_Library::GetCompendiumCategories(TArray<FName>& Categories) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetCompendiumCategories"));
    struct Params_GetCompendiumCategories {
        TArray<FName> Categories; // 0x0
    }; // Size: 0x10
    Params_GetCompendiumCategories params{};
    params.Categories = (TArray<FName>)Categories;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Categories = params.Categories;
}
void UUI_DB_Library::GetActorsKnownSubjects(FName Actor, TArray<FFactInformation>& Subjects, TArray<FFactInformation>& SubjectsAlreadyKnown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.GetActorsKnownSubjects"));
    struct Params_GetActorsKnownSubjects {
        FName Actor; // 0x0
        TArray<FFactInformation> Subjects; // 0x8
        TArray<FFactInformation> SubjectsAlreadyKnown; // 0x18
    }; // Size: 0x28
    Params_GetActorsKnownSubjects params{};
    params.Actor = (FName)Actor;
    params.Subjects = (TArray<FFactInformation>)Subjects;
    params.SubjectsAlreadyKnown = (TArray<FFactInformation>)SubjectsAlreadyKnown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Subjects = params.Subjects;
    SubjectsAlreadyKnown = params.SubjectsAlreadyKnown;
}
bool UUI_DB_Library::ChooseStationQueryDataBP(AActor* InActor, UObject* ObjectComponent, EStationInteraction InStationInteractionType, FName InActionName, int32_t InConnectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UI_DB_Library.ChooseStationQueryDataBP"));
    struct Params_ChooseStationQueryDataBP {
        AActor* InActor; // 0x0
        UObject* ObjectComponent; // 0x8
        EStationInteraction InStationInteractionType; // 0x10
        char pad_11[0x3];
        FName InActionName; // 0x14
        int32_t InConnectionIndex; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ChooseStationQueryDataBP params{};
    params.InActor = (AActor*)InActor;
    params.ObjectComponent = (UObject*)ObjectComponent;
    params.InStationInteractionType = (EStationInteraction)InStationInteractionType;
    params.InActionName = (FName)InActionName;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

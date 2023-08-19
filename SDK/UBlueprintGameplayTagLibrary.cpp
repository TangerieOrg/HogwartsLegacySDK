#include "AActor.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGameplayTagQuery.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UBlueprintGameplayTagLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(FGameplayTag A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag"));
    struct Params_NotEqual_TagTag {
        FGameplayTag A; // 0x0
        FString B; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_NotEqual_TagTag params{};
    params.A = (FGameplayTag)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBlueprintGameplayTagLibrary* UBlueprintGameplayTagLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.BlueprintGameplayTagLibrary");
    return (UBlueprintGameplayTagLibrary*)res;
}
bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag"));
    struct Params_RemoveGameplayTag {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTag Tag; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_RemoveGameplayTag params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.Tag = (FGameplayTag)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(FGameplayTag GameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid"));
    struct Params_IsGameplayTagValid {
        FGameplayTag GameplayTag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsGameplayTagValid params{};
    params.GameplayTag = (FGameplayTag)GameplayTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer"));
    struct Params_NotEqual_TagContainerTagContainer {
        FGameplayTagContainer A; // 0x0
        FString B; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_NotEqual_TagContainerTagContainer params{};
    params.A = (FGameplayTagContainer)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags() {}
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer"));
    struct Params_NotEqual_GameplayTagContainer {
        FGameplayTagContainer A; // 0x0
        FGameplayTagContainer B; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_NotEqual_GameplayTagContainer params{};
    params.A = (FGameplayTagContainer)A;
    params.B = (FGameplayTagContainer)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(FGameplayTag GameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag"));
    struct Params_GetDebugStringFromGameplayTag {
        FGameplayTag GameplayTag; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetDebugStringFromGameplayTag params{};
    params.GameplayTag = (FGameplayTag)GameplayTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag"));
    struct Params_NotEqual_GameplayTag {
        FGameplayTag A; // 0x0
        FGameplayTag B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_NotEqual_GameplayTag params{};
    params.A = (FGameplayTag)A;
    params.B = (FGameplayTag)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray"));
    struct Params_MakeGameplayTagContainerFromArray {
        TArray<FGameplayTag> GameplayTags; // 0x0
        FGameplayTagContainer ReturnValue; // 0x10
    }; // Size: 0x30
    Params_MakeGameplayTagContainerFromArray params{};
    params.GameplayTags = (TArray<FGameplayTag>)GameplayTags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GameplayTags = params.GameplayTags;
    return (FGameplayTagContainer)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag"));
    struct Params_MatchesTag {
        FGameplayTag TagOne; // 0x0
        FGameplayTag TagTwo; // 0x8
        bool bExactMatch; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_MatchesTag params{};
    params.TagOne = (FGameplayTag)TagOne;
    params.TagTwo = (FGameplayTag)TagTwo;
    params.bExactMatch = (bool)bExactMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags"));
    struct Params_MatchesAnyTags {
        FGameplayTag TagOne; // 0x0
        FGameplayTagContainer OtherContainer; // 0x8
        bool bExactMatch; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_MatchesAnyTags params{};
    params.TagOne = (FGameplayTag)TagOne;
    params.OtherContainer = (FGameplayTagContainer)OtherContainer;
    params.bExactMatch = (bool)bExactMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OtherContainer = params.OtherContainer;
    return (bool)params.ReturnValue;
}
FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(FGameplayTagContainer Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer"));
    struct Params_MakeLiteralGameplayTagContainer {
        FGameplayTagContainer Value; // 0x0
        FGameplayTagContainer ReturnValue; // 0x20
    }; // Size: 0x40
    Params_MakeLiteralGameplayTagContainer params{};
    params.Value = (FGameplayTagContainer)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(FGameplayTag Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));
    struct Params_MakeLiteralGameplayTag {
        FGameplayTag Value; // 0x0
        FGameplayTag ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeLiteralGameplayTag params{};
    params.Value = (FGameplayTag)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(FGameplayTagQuery TagQuery) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));
    struct Params_MakeGameplayTagQuery {
        FGameplayTagQuery TagQuery; // 0x0
        FGameplayTagQuery ReturnValue; // 0x48
    }; // Size: 0x90
    Params_MakeGameplayTagQuery params{};
    params.TagQuery = (FGameplayTagQuery)TagQuery;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGameplayTagQuery)params.ReturnValue;
}
FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(FGameplayTag SingleTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag"));
    struct Params_MakeGameplayTagContainerFromTag {
        FGameplayTag SingleTag; // 0x0
        FGameplayTagContainer ReturnValue; // 0x8
    }; // Size: 0x28
    Params_MakeGameplayTagContainerFromTag params{};
    params.SingleTag = (FGameplayTag)SingleTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(FGameplayTagQuery& TagQuery) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty"));
    struct Params_IsTagQueryEmpty {
        FGameplayTagQuery TagQuery; // 0x0
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_IsTagQueryEmpty params{};
    params.TagQuery = (FGameplayTagQuery)TagQuery;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagQuery = params.TagQuery;
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag"));
    struct Params_HasTag {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTag Tag; // 0x20
        bool bExactMatch; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_HasTag params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.Tag = (FGameplayTag)Tag;
    params.bExactMatch = (bool)bExactMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags"));
    struct Params_HasAnyTags {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTagContainer OtherContainer; // 0x20
        bool bExactMatch; // 0x40
        bool ReturnValue; // 0x41
    }; // Size: 0x42
    Params_HasAnyTags params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.OtherContainer = (FGameplayTagContainer)OtherContainer;
    params.bExactMatch = (bool)bExactMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    OtherContainer = params.OtherContainer;
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer"));
    struct Params_EqualEqual_GameplayTagContainer {
        FGameplayTagContainer A; // 0x0
        FGameplayTagContainer B; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_EqualEqual_GameplayTagContainer params{};
    params.A = (FGameplayTagContainer)A;
    params.B = (FGameplayTagContainer)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
bool UBlueprintGameplayTagLibrary::HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags"));
    struct Params_HasAllTags {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTagContainer OtherContainer; // 0x20
        bool bExactMatch; // 0x40
        bool ReturnValue; // 0x41
    }; // Size: 0x42
    Params_HasAllTags params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.OtherContainer = (FGameplayTagContainer)OtherContainer;
    params.bExactMatch = (bool)bExactMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OtherContainer = params.OtherContainer;
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
int32_t UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));
    struct Params_GetNumGameplayTagsInContainer {
        FGameplayTagContainer TagContainer; // 0x0
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_GetNumGameplayTagsInContainer params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (int32_t)params.ReturnValue;
}
FName UBlueprintGameplayTagLibrary::GetTagName(FGameplayTag& GameplayTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName"));
    struct Params_GetTagName {
        FGameplayTag GameplayTag; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTagName params{};
    params.GameplayTag = (FGameplayTag)GameplayTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GameplayTag = params.GameplayTag;
    return (FName)params.ReturnValue;
}
FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer"));
    struct Params_GetDebugStringFromGameplayTagContainer {
        FGameplayTagContainer TagContainer; // 0x0
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetDebugStringFromGameplayTagContainer params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
    return (FString)params.ReturnValue;
}
void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery"));
    struct Params_GetAllActorsOfClassMatchingTagQuery {
        UObject* WorldContextObject; // 0x0
        UClass* ActorClass; // 0x8
        FGameplayTagQuery GameplayTagQuery; // 0x10
        TArray<AActor*> OutActors; // 0x58
    }; // Size: 0x68
    Params_GetAllActorsOfClassMatchingTagQuery params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ActorClass = (UClass*)ActorClass;
    params.GameplayTagQuery = (FGameplayTagQuery)GameplayTagQuery;
    params.OutActors = (TArray<AActor*>)OutActors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GameplayTagQuery = params.GameplayTagQuery;
    OutActors = params.OutActors;
}
void UBlueprintGameplayTagLibrary::AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag"));
    struct Params_AddGameplayTag {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTag Tag; // 0x20
    }; // Size: 0x28
    Params_AddGameplayTag params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.Tag = (FGameplayTag)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagContainer = params.TagContainer;
}
bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag"));
    struct Params_EqualEqual_GameplayTag {
        FGameplayTag A; // 0x0
        FGameplayTag B; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EqualEqual_GameplayTag params{};
    params.A = (FGameplayTag)A;
    params.B = (FGameplayTag)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag() {}
bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));
    struct Params_DoesContainerMatchTagQuery {
        FGameplayTagContainer TagContainer; // 0x0
        FGameplayTagQuery TagQuery; // 0x20
        bool ReturnValue; // 0x68
    }; // Size: 0x69
    Params_DoesContainerMatchTagQuery params{};
    params.TagContainer = (FGameplayTagContainer)TagContainer;
    params.TagQuery = (FGameplayTagQuery)TagQuery;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TagQuery = params.TagQuery;
    TagContainer = params.TagContainer;
    return (bool)params.ReturnValue;
}
void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer"));
    struct Params_BreakGameplayTagContainer {
        FGameplayTagContainer GameplayTagContainer; // 0x0
        TArray<FGameplayTag> GameplayTags; // 0x20
    }; // Size: 0x30
    Params_BreakGameplayTagContainer params{};
    params.GameplayTagContainer = (FGameplayTagContainer)GameplayTagContainer;
    params.GameplayTags = (TArray<FGameplayTag>)GameplayTags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GameplayTagContainer = params.GameplayTagContainer;
    GameplayTags = params.GameplayTags;
}
void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));
    struct Params_AppendGameplayTagContainers {
        FGameplayTagContainer InOutTagContainer; // 0x0
        FGameplayTagContainer InTagContainer; // 0x20
    }; // Size: 0x40
    Params_AppendGameplayTagContainers params{};
    params.InOutTagContainer = (FGameplayTagContainer)InOutTagContainer;
    params.InTagContainer = (FGameplayTagContainer)InTagContainer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InOutTagContainer = params.InOutTagContainer;
    InTagContainer = params.InTagContainer;
}

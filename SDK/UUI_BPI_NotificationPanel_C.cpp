#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_NotificationPanel_C.hpp"
void UUI_BPI_NotificationPanel_C::I_AddGenericNotification(FString HeaderText, FString SubheaderText, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddGenericNotification"));
    struct Params_I_AddGenericNotification {
        FString HeaderText; // 0x0
        FString SubheaderText; // 0x10
        FString IconName; // 0x20
    }; // Size: 0x30
    Params_I_AddGenericNotification params{};
    params.HeaderText = (FString)HeaderText;
    params.SubheaderText = (FString)SubheaderText;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
UUI_BPI_NotificationPanel_C* UUI_BPI_NotificationPanel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C");
    return (UUI_BPI_NotificationPanel_C*)res;
}
void UUI_BPI_NotificationPanel_C::I_AddChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t MaxLevels) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddChallengeCompleteNotification"));
    struct Params_I_AddChallengeCompleteNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedLevel; // 0x10
        int32_t MaxLevels; // 0x14
    }; // Size: 0x18
    Params_I_AddChallengeCompleteNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedLevel = (int32_t)CompletedLevel;
    params.MaxLevels = (int32_t)MaxLevels;
    ProcessEvent(func, &params);
}
void UUI_BPI_NotificationPanel_C::I_ItemCollected(FString Name, FString IconName, int32_t Count, FString Header, bool SpecialCollection, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_ItemCollected"));
    struct Params_I_ItemCollected {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString Header; // 0x28
        bool SpecialCollection; // 0x38
        char pad_39[0x3];
        FName Variation; // 0x3c
    }; // Size: 0x44
    Params_I_ItemCollected params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.Header = (FString)Header;
    params.SpecialCollection = (bool)SpecialCollection;
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
}
void UUI_BPI_NotificationPanel_C::I_AddCollectionObtainedNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddCollectionObtainedNotification"));
    struct Params_I_AddCollectionObtainedNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_I_AddCollectionObtainedNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UUI_BPI_NotificationPanel_C::I_AddCollectionKnownNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_NotificationPanel.UI_BPI_NotificationPanel_C.I_AddCollectionKnownNotification"));
    struct Params_I_AddCollectionKnownNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_I_AddCollectionKnownNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}

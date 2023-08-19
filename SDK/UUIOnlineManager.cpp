#include "EAccountLinkStatus.hpp"
#include "FMOTD.hpp"
#include "FOnlineOfferStruct.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPopupScreen.hpp"
#include "UTexture2DDynamic.hpp"
#include "UUIOnlineManager.hpp"
FString UUIOnlineManager::GetWWIDUsername() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWWIDUsername"));
    struct Params_GetWWIDUsername {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWWIDUsername params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIOnlineManager::OnControllerDisconnectedPopupRemoved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.OnControllerDisconnectedPopupRemoved"));
    struct Params_OnControllerDisconnectedPopupRemoved {
    }; // Size: 0x0
    Params_OnControllerDisconnectedPopupRemoved params{};
    ProcessEvent(func, &params);
}
UUIOnlineManager* UUIOnlineManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIOnlineManager");
    return (UUIOnlineManager*)res;
}
void UUIOnlineManager::WBPNCheckLinkStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNCheckLinkStatus"));
    struct Params_WBPNCheckLinkStatus {
    }; // Size: 0x0
    Params_WBPNCheckLinkStatus params{};
    ProcessEvent(func, &params);
}
bool UUIOnlineManager::IsConnectedToOnlineServices() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsConnectedToOnlineServices"));
    struct Params_IsConnectedToOnlineServices {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsConnectedToOnlineServices params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIOnlineManager::PurchaseDLC(FString OfferId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.PurchaseDLC"));
    struct Params_PurchaseDLC {
        FString OfferId; // 0x0
    }; // Size: 0x10
    Params_PurchaseDLC params{};
    params.OfferId = (FString)OfferId;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::WBPNStartSilentLogin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNStartSilentLogin"));
    struct Params_WBPNStartSilentLogin {
    }; // Size: 0x0
    Params_WBPNStartSilentLogin params{};
    ProcessEvent(func, &params);
}
FString UUIOnlineManager::GetExternalConfig(FString LinkType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetExternalConfig"));
    struct Params_GetExternalConfig {
        FString LinkType; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetExternalConfig params{};
    params.LinkType = (FString)LinkType;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIOnlineManager::UpdateFullGameNotInstalledMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.UpdateFullGameNotInstalledMessage"));
    struct Params_UpdateFullGameNotInstalledMessage {
    }; // Size: 0x0
    Params_UpdateFullGameNotInstalledMessage params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::WBPNStartLogin(bool deviceFlow, FString UserName, FString password) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNStartLogin"));
    struct Params_WBPNStartLogin {
        bool deviceFlow; // 0x0
        char pad_1[0x7];
        FString UserName; // 0x8
        FString password; // 0x18
    }; // Size: 0x28
    Params_WBPNStartLogin params{};
    params.deviceFlow = (bool)deviceFlow;
    params.UserName = (FString)UserName;
    params.password = (FString)password;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::WBPNPollForWWLink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNPollForWWLink"));
    struct Params_WBPNPollForWWLink {
    }; // Size: 0x0
    Params_WBPNPollForWWLink params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::ForceRichPresenceString(FString RichPresenceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.ForceRichPresenceString"));
    struct Params_ForceRichPresenceString {
        FString RichPresenceString; // 0x0
    }; // Size: 0x10
    Params_ForceRichPresenceString params{};
    params.RichPresenceString = (FString)RichPresenceString;
    ProcessEvent(func, &params);
}
TArray<FString> UUIOnlineManager::GetPendingRewardNotifications() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetPendingRewardNotifications"));
    struct Params_GetPendingRewardNotifications {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPendingRewardNotifications params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UUIOnlineManager::WBPNRequestAccountInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNRequestAccountInfo"));
    struct Params_WBPNRequestAccountInfo {
    }; // Size: 0x0
    Params_WBPNRequestAccountInfo params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUIOnlineManager::GetWizardWords() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWizardWords"));
    struct Params_GetWizardWords {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWizardWords params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UUIOnlineManager::WBPNGenerateDeviceToken(bool bPollLogin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNGenerateDeviceToken"));
    struct Params_WBPNGenerateDeviceToken {
        bool bPollLogin; // 0x0
    }; // Size: 0x1
    Params_WBPNGenerateDeviceToken params{};
    params.bPollLogin = (bool)bPollLogin;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RequestMOTD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RequestMOTD"));
    struct Params_RequestMOTD {
    }; // Size: 0x0
    Params_RequestMOTD params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::WBPNExitDeviceFlow(bool bContinuePolling) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.WBPNExitDeviceFlow"));
    struct Params_WBPNExitDeviceFlow {
        bool bContinuePolling; // 0x0
    }; // Size: 0x1
    Params_WBPNExitDeviceFlow params{};
    params.bContinuePolling = (bool)bContinuePolling;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::DismissRewardNotification(FString RewardID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.DismissRewardNotification"));
    struct Params_DismissRewardNotification {
        FString RewardID; // 0x0
    }; // Size: 0x10
    Params_DismissRewardNotification params{};
    params.RewardID = (FString)RewardID;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::UpdateNetworkNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.UpdateNetworkNotification"));
    struct Params_UpdateNetworkNotification {
    }; // Size: 0x0
    Params_UpdateNetworkNotification params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::ShowPlatformLogo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.ShowPlatformLogo"));
    struct Params_ShowPlatformLogo {
    }; // Size: 0x0
    Params_ShowPlatformLogo params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::ShowFullGameNotInstalledMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.ShowFullGameNotInstalledMessage"));
    struct Params_ShowFullGameNotInstalledMessage {
    }; // Size: 0x0
    Params_ShowFullGameNotInstalledMessage params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::SendWizardingWorldData(FString AttributeKey, FString AttributeValue, bool Update) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.SendWizardingWorldData"));
    struct Params_SendWizardingWorldData {
        FString AttributeKey; // 0x0
        FString AttributeValue; // 0x10
        bool Update; // 0x20
    }; // Size: 0x21
    Params_SendWizardingWorldData params{};
    params.AttributeKey = (FString)AttributeKey;
    params.AttributeValue = (FString)AttributeValue;
    params.Update = (bool)Update;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::OnControllerDisconnectedPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.OnControllerDisconnectedPopupClosed"));
    struct Params_OnControllerDisconnectedPopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnControllerDisconnectedPopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RetryConnection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RetryConnection"));
    struct Params_RetryConnection {
    }; // Size: 0x0
    Params_RetryConnection params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RetrieveWizardingWorldData(bool bUpdateOnFailure) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RetrieveWizardingWorldData"));
    struct Params_RetrieveWizardingWorldData {
        bool bUpdateOnFailure; // 0x0
    }; // Size: 0x1
    Params_RetrieveWizardingWorldData params{};
    params.bUpdateOnFailure = (bool)bUpdateOnFailure;
    ProcessEvent(func, &params);
}
bool UUIOnlineManager::IsNetworkConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsNetworkConnected"));
    struct Params_IsNetworkConnected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNetworkConnected params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIOnlineManager::ResetWBPNLogin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.ResetWBPNLogin"));
    struct Params_ResetWBPNLogin {
    }; // Size: 0x0
    Params_ResetWBPNLogin params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RequestWizardWords() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RequestWizardWords"));
    struct Params_RequestWizardWords {
    }; // Size: 0x0
    Params_RequestWizardWords params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RequestEULA() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RequestEULA"));
    struct Params_RequestEULA {
    }; // Size: 0x0
    Params_RequestEULA params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::RefreshRichPresenceString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.RefreshRichPresenceString"));
    struct Params_RefreshRichPresenceString {
    }; // Size: 0x0
    Params_RefreshRichPresenceString params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::QueryStoreReceipts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.QueryStoreReceipts"));
    struct Params_QueryStoreReceipts {
    }; // Size: 0x0
    Params_QueryStoreReceipts params{};
    ProcessEvent(func, &params);
}
void UUIOnlineManager::QueryStoreOffers() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.QueryStoreOffers"));
    struct Params_QueryStoreOffers {
    }; // Size: 0x0
    Params_QueryStoreOffers params{};
    ProcessEvent(func, &params);
}
FString UUIOnlineManager::GetWBPNUrl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNUrl"));
    struct Params_GetWBPNUrl {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWBPNUrl params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIOnlineManager::OnFullGameNotInstalledMessageClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.OnFullGameNotInstalledMessageClosed"));
    struct Params_OnFullGameNotInstalledMessageClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnFullGameNotInstalledMessageClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUIOnlineManager::HidePlatformLogo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.HidePlatformLogo"));
    struct Params_HidePlatformLogo {
    }; // Size: 0x0
    Params_HidePlatformLogo params{};
    ProcessEvent(func, &params);
}
bool UUIOnlineManager::IsLoggedIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsLoggedIn"));
    struct Params_IsLoggedIn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoggedIn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIOnlineManager::IsHydraLoggedIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsHydraLoggedIn"));
    struct Params_IsHydraLoggedIn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHydraLoggedIn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIOnlineManager::GetWBPNUsername() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNUsername"));
    struct Params_GetWBPNUsername {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWBPNUsername params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UUIOnlineManager::IsFullGameInstalled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsFullGameInstalled"));
    struct Params_IsFullGameInstalled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFullGameInstalled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIOnlineManager::GetWBPNShortcode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNShortcode"));
    struct Params_GetWBPNShortcode {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWBPNShortcode params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UUIOnlineManager::IsDay0PatchInstalled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.IsDay0PatchInstalled"));
    struct Params_IsDay0PatchInstalled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDay0PatchInstalled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIOnlineManager::GetWBPNUnlink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNUnlink"));
    struct Params_GetWBPNUnlink {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWBPNUnlink params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UTexture2DDynamic* UUIOnlineManager::GetWBPNQRCode(int32_t texWidth, int32_t texHeight, bool bUnlink) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNQRCode"));
    struct Params_GetWBPNQRCode {
        int32_t texWidth; // 0x0
        int32_t texHeight; // 0x4
        bool bUnlink; // 0x8
        char pad_9[0x7];
        UTexture2DDynamic* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetWBPNQRCode params{};
    params.texWidth = (int32_t)texWidth;
    params.texHeight = (int32_t)texHeight;
    params.bUnlink = (bool)bUnlink;
    ProcessEvent(func, &params);
    return (UTexture2DDynamic*)params.ReturnValue;
}
EAccountLinkStatus UUIOnlineManager::GetWBPNLinkStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetWBPNLinkStatus"));
    struct Params_GetWBPNLinkStatus {
        EAccountLinkStatus ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWBPNLinkStatus params{};
    ProcessEvent(func, &params);
    return (EAccountLinkStatus)params.ReturnValue;
}
UUIOnlineManager* UUIOnlineManager::GetUIOnlineManagerPure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetUIOnlineManagerPure"));
    struct Params_GetUIOnlineManagerPure {
        UUIOnlineManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUIOnlineManagerPure params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUIOnlineManager*)params.ReturnValue;
}
void UUIOnlineManager::GetStoreState(FString& StoreState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetStoreState"));
    struct Params_GetStoreState {
        FString StoreState; // 0x0
    }; // Size: 0x10
    Params_GetStoreState params{};
    params.StoreState = (FString)StoreState;
    ProcessEvent(func, &params);
    StoreState = params.StoreState;
}
void UUIOnlineManager::GetStoreOffers(TArray<FOnlineOfferStruct>& Offers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetStoreOffers"));
    struct Params_GetStoreOffers {
        TArray<FOnlineOfferStruct> Offers; // 0x0
    }; // Size: 0x10
    Params_GetStoreOffers params{};
    params.Offers = (TArray<FOnlineOfferStruct>)Offers;
    ProcessEvent(func, &params);
    Offers = params.Offers;
}
void UUIOnlineManager::GetProfileName(FString& ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetProfileName"));
    struct Params_GetProfileName {
        FString ProfileName; // 0x0
    }; // Size: 0x10
    Params_GetProfileName params{};
    params.ProfileName = (FString)ProfileName;
    ProcessEvent(func, &params);
    ProfileName = params.ProfileName;
}
UUIOnlineManager* UUIOnlineManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.Get"));
    struct Params_Get {
        UUIOnlineManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUIOnlineManager*)params.ReturnValue;
}
TArray<FMOTD> UUIOnlineManager::GetMOTD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetMOTD"));
    struct Params_GetMOTD {
        TArray<FMOTD> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMOTD params{};
    ProcessEvent(func, &params);
    return (TArray<FMOTD>)params.ReturnValue;
}
FString UUIOnlineManager::GetHydraID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetHydraID"));
    struct Params_GetHydraID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetHydraID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UUIOnlineManager::GetFullGameInstallCompletionPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIOnlineManager.GetFullGameInstallCompletionPercent"));
    struct Params_GetFullGameInstallCompletionPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFullGameInstallCompletionPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUIOnlineManager::GetEULA() {}

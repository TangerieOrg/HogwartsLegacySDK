#pragma once
#include <cstdint>
#include "EAccountLinkStatus.hpp"
#include "FMOTD.hpp"
#include "FOnlineOfferStruct.hpp"
#include "UObject.hpp"
class UPopupScreen;
class UTexture2DDynamic;
#pragma pack(push, 1)
class UUIOnlineManager : public UObject {
public:
    char pad_28[0x30];
    UPopupScreen* ControllerDisconnectPopup; // 0x58
    char pad_60[0x20];
    UPopupScreen* FullGameNotInstalledPopup; // 0x80
    char pad_88[0xa8];
    UPopupScreen* LoginStatusChangedPopup; // 0x130
    char pad_138[0x1c0];
    static UUIOnlineManager* StaticClass();
    void WBPNStartSilentLogin();
    void WBPNStartLogin(bool deviceFlow, FString UserName, FString password);
    void WBPNRequestAccountInfo();
    void WBPNPollForWWLink();
    void WBPNGenerateDeviceToken(bool bPollLogin);
    void WBPNExitDeviceFlow(bool bContinuePolling);
    void WBPNCheckLinkStatus();
    void UpdateNetworkNotification();
    void UpdateFullGameNotInstalledMessage();
    void ShowPlatformLogo();
    void ShowFullGameNotInstalledMessage();
    void SendWizardingWorldData(FString AttributeKey, FString AttributeValue, bool Update);
    void RetryConnection();
    void RetrieveWizardingWorldData(bool bUpdateOnFailure);
    void ResetWBPNLogin();
    void RequestWizardWords();
    void RequestMOTD();
    void RequestEULA();
    void RefreshRichPresenceString();
    void QueryStoreReceipts();
    void QueryStoreOffers();
    void PurchaseDLC(FString OfferId);
    void OnFullGameNotInstalledMessageClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OnControllerDisconnectedPopupRemoved();
    void OnControllerDisconnectedPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    bool IsNetworkConnected();
    bool IsLoggedIn();
    bool IsHydraLoggedIn();
    bool IsFullGameInstalled();
    bool IsDay0PatchInstalled();
    bool IsConnectedToOnlineServices();
    void HidePlatformLogo();
    FString GetWWIDUsername();
    TArray<FString> GetWizardWords();
    FString GetWBPNUsername();
    FString GetWBPNUrl();
    FString GetWBPNUnlink();
    FString GetWBPNShortcode();
    UTexture2DDynamic* GetWBPNQRCode(int32_t texWidth, int32_t texHeight, bool bUnlink);
    EAccountLinkStatus GetWBPNLinkStatus();
    static UUIOnlineManager* GetUIOnlineManagerPure();
    void GetStoreState(FString& StoreState);
    void GetStoreOffers(TArray<FOnlineOfferStruct>& Offers);
    void GetProfileName(FString& ProfileName);
    TArray<FString> GetPendingRewardNotifications();
    TArray<FMOTD> GetMOTD();
    FString GetHydraID();
    float GetFullGameInstallCompletionPercent();
    FString GetExternalConfig(FString LinkType);
    void GetEULA();
    static UUIOnlineManager* Get();
    void ForceRichPresenceString(FString RichPresenceString);
    void DismissRewardNotification(FString RewardID);
}; // Size: 0x2f8
#pragma pack(pop)

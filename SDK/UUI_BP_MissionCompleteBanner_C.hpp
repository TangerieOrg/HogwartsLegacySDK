#pragma once
#include <cstdint>
#include "BannerUpdateType.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UImage;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_MissionCompleteBanner_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* HideMissionComplete_Anim; // 0x270
    UWidgetAnimation* ShowMissionComplete_Anim; // 0x278
    UPhoenixTextBlock* CompleteMissionName; // 0x280
    UPhoenixTextBlock* CompleteTitle; // 0x288
    UImage* MissionCompleteIcon; // 0x290
    UImage* WinCloud; // 0x298
    BannerUpdateType BannerUpdateType; // 0x2a0
    char pad_2a1[0x7];
    FString MissionName; // 0x2a8
    static UUI_BP_MissionCompleteBanner_C* StaticClass();
    void MissionCompleteBannerDone();
    void HideMissionComplete(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowMissionComplete(BannerUpdateType updateType, FString MissionTitle, FString MissionName, FString MissionIcon);
    void IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void ExecuteUbergraph_UI_BP_MissionCompleteBanner(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)

#include "BannerUpdateType.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_MissionCompleteBanner_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_MissionCompleteBanner_C* UUI_BP_MissionCompleteBanner_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Mission/UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C");
    return (UUI_BP_MissionCompleteBanner_C*)res;
}
void UUI_BP_MissionCompleteBanner_C::MissionCompleteBannerDone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.MissionCompleteBannerDone"));
    struct Params_MissionCompleteBannerDone {
    }; // Size: 0x0
    Params_MissionCompleteBannerDone params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MissionCompleteBanner_C::HideMissionComplete(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.HideMissionComplete"));
    struct Params_HideMissionComplete {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideMissionComplete params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionCompleteBanner_C::ShowMissionComplete(BannerUpdateType updateType, FString MissionTitle, FString MissionName, FString MissionIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.ShowMissionComplete"));
    struct Params_ShowMissionComplete {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x7];
        FString MissionTitle; // 0x8
        FString MissionName; // 0x18
        FString MissionIcon; // 0x28
    }; // Size: 0x38
    Params_ShowMissionComplete params{};
    params.updateType = (BannerUpdateType)updateType;
    params.MissionTitle = (FString)MissionTitle;
    params.MissionName = (FString)MissionName;
    params.MissionIcon = (FString)MissionIcon;
    ProcessEvent(func, &params);
}
void UUI_BP_MissionCompleteBanner_C::ExecuteUbergraph_UI_BP_MissionCompleteBanner(int32_t EntryPoint) {}
void UUI_BP_MissionCompleteBanner_C::IconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_MissionCompleteBanner.UI_BP_MissionCompleteBanner_C.IconLoaded"));
    struct Params_IconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_IconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}

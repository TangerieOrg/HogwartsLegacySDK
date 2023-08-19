#include "ETutorialTransparency.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMediaSource.hpp"
#include "UScreen.hpp"
#include "UTutorialScreen.hpp"
UTutorialScreen* UTutorialScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TutorialScreen");
    return (UTutorialScreen*)res;
}
void UTutorialScreen::SetTutorialVideoReady(UMediaSource* MediaSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialVideoReady"));
    struct Params_SetTutorialVideoReady {
        UMediaSource* MediaSource; // 0x0
    }; // Size: 0x8
    Params_SetTutorialVideoReady params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialCompletionAction(EUMGInputAction InputAction, bool bMustHold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialCompletionAction"));
    struct Params_SetTutorialCompletionAction {
        EUMGInputAction InputAction; // 0x0
        bool bMustHold; // 0x1
    }; // Size: 0x2
    Params_SetTutorialCompletionAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.bMustHold = (bool)bMustHold;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialVideoIsLoading(bool IsLoading) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialVideoIsLoading"));
    struct Params_SetTutorialVideoIsLoading {
        bool IsLoading; // 0x0
    }; // Size: 0x1
    Params_SetTutorialVideoIsLoading params{};
    params.IsLoading = (bool)IsLoading;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialLegendItems(TArray<FLegendItemData>& LegendItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialLegendItems"));
    struct Params_SetTutorialLegendItems {
        TArray<FLegendItemData> LegendItems; // 0x0
    }; // Size: 0x10
    Params_SetTutorialLegendItems params{};
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
}
void UTutorialScreen::SetTutorialTitle(FString TitleString, bool IsTranslatable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialTitle"));
    struct Params_SetTutorialTitle {
        FString TitleString; // 0x0
        bool IsTranslatable; // 0x10
    }; // Size: 0x11
    Params_SetTutorialTitle params{};
    params.TitleString = (FString)TitleString;
    params.IsTranslatable = (bool)IsTranslatable;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialExpiryTimerProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialExpiryTimerProgress"));
    struct Params_SetTutorialExpiryTimerProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetTutorialExpiryTimerProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialImageName(FString ImageString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialImageName"));
    struct Params_SetTutorialImageName {
        FString ImageString; // 0x0
    }; // Size: 0x10
    Params_SetTutorialImageName params{};
    params.ImageString = (FString)ImageString;
    ProcessEvent(func, &params);
}
void UTutorialScreen::SetTutorialBody(FString BodyString, bool IsTranslatable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.SetTutorialBody"));
    struct Params_SetTutorialBody {
        FString BodyString; // 0x0
        bool IsTranslatable; // 0x10
    }; // Size: 0x11
    Params_SetTutorialBody params{};
    params.BodyString = (FString)BodyString;
    params.IsTranslatable = (bool)IsTranslatable;
    ProcessEvent(func, &params);
}
void UTutorialScreen::OnSetTutorialPosition(FVector2D Position, FVector2D Alignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialScreen.OnSetTutorialPosition"));
    struct Params_OnSetTutorialPosition {
        FVector2D Position; // 0x0
        FVector2D Alignment; // 0x8
    }; // Size: 0x10
    Params_OnSetTutorialPosition params{};
    params.Position = (FVector2D)Position;
    params.Alignment = (FVector2D)Alignment;
    ProcessEvent(func, &params);
}

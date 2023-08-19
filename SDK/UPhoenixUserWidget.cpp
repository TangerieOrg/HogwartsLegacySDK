#include "EMenuReaderInterruptType.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUMGFocusWidget.hpp"
UPhoenixUserWidget* UPhoenixUserWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixUserWidget");
    return (UPhoenixUserWidget*)res;
}
void UPhoenixUserWidget::PhoenixUserWidgetIntEvent__DelegateSignature(UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixUserWidget.PhoenixUserWidgetIntEvent__DelegateSignature"));
    struct Params_PhoenixUserWidgetIntEvent__DelegateSignature {
        UPhoenixUserWidget* PhoenixUserWidget; // 0x0
        int32_t IntParam; // 0x8
    }; // Size: 0xc
    Params_PhoenixUserWidgetIntEvent__DelegateSignature params{};
    params.PhoenixUserWidget = (UPhoenixUserWidget*)PhoenixUserWidget;
    params.IntParam = (int32_t)IntParam;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::TriggerCustomIntro(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.TriggerCustomIntro"));
    struct Params_TriggerCustomIntro {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_TriggerCustomIntro params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::TriggerOutro(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.TriggerOutro"));
    struct Params_TriggerOutro {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_TriggerOutro params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::TriggerCustomOutro(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.TriggerCustomOutro"));
    struct Params_TriggerCustomOutro {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_TriggerCustomOutro params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::TriggerIntro(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.TriggerIntro"));
    struct Params_TriggerIntro {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_TriggerIntro params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::ReadMenu(int32_t DepthLevel, EMenuReaderInterruptType InterruptType, UObject* InterruptOwnerFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.ReadMenu"));
    struct Params_ReadMenu {
        int32_t DepthLevel; // 0x0
        EMenuReaderInterruptType InterruptType; // 0x4
        char pad_5[0x3];
        UObject* InterruptOwnerFilter; // 0x8
    }; // Size: 0x10
    Params_ReadMenu params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.InterruptType = (EMenuReaderInterruptType)InterruptType;
    params.InterruptOwnerFilter = (UObject*)InterruptOwnerFilter;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::OverrideInitialIntroType(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.OverrideInitialIntroType"));
    struct Params_OverrideInitialIntroType {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OverrideInitialIntroType params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UPhoenixUserWidget::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
bool UPhoenixUserWidget::IsTransitionInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.IsTransitionInProgress"));
    struct Params_IsTransitionInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTransitionInProgress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPhoenixUserWidget::IsCurrentTransitionAnIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.IsCurrentTransitionAnIntro"));
    struct Params_IsCurrentTransitionAnIntro {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCurrentTransitionAnIntro params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPhoenixUserWidget::InterruptMenuReader(EMenuReaderInterruptType InterruptType, UObject* InterruptOwnerFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.InterruptMenuReader"));
    struct Params_InterruptMenuReader {
        EMenuReaderInterruptType InterruptType; // 0x0
        char pad_1[0x7];
        UObject* InterruptOwnerFilter; // 0x8
    }; // Size: 0x10
    Params_InterruptMenuReader params{};
    params.InterruptType = (EMenuReaderInterruptType)InterruptType;
    params.InterruptOwnerFilter = (UObject*)InterruptOwnerFilter;
    ProcessEvent(func, &params);
}
int32_t UPhoenixUserWidget::GetCurrentTransitionType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.GetCurrentTransitionType"));
    struct Params_GetCurrentTransitionType {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTransitionType params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UPhoenixUserWidget::GetCurrentTransitionProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.GetCurrentTransitionProgress"));
    struct Params_GetCurrentTransitionProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTransitionProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FString> UPhoenixUserWidget::GatherMenuReaderStrings(int32_t DepthLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixUserWidget.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}

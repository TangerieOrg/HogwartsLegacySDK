#include "EDebugPanelControlID.hpp"
#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
#include "UDebugPanel.hpp"
#include "UDebugPanelComponent.hpp"
#include "UFunction.hpp"
#include "UWorld.hpp"
bool UDebugPanelComponent::SetText(EDebugPanelControlID controlID, FString Text) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetText"));
    struct Params_SetText {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x7];
        FString Text; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetText params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.Text = (FString)Text;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDebugPanelComponent* UDebugPanelComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DebugPanel.DebugPanelComponent");
    return (UDebugPanelComponent*)res;
}
void UDebugPanelComponent::ShowPanel(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.ShowPanel"));
    struct Params_ShowPanel {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowPanel params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
bool UDebugPanelComponent::SetFont(EDebugPanelControlID controlID, FSlateFontInfo Font) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetFont"));
    struct Params_SetFont {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x7];
        FSlateFontInfo Font; // 0x8
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_SetFont params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.Font = (FSlateFontInfo)Font;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::SetVisible(EDebugPanelControlID controlID, bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetVisible"));
    struct Params_SetVisible {
        EDebugPanelControlID controlID; // 0x0
        bool Visible; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_SetVisible params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDebugPanelComponent::HidePanel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.HidePanel"));
    struct Params_HidePanel {
    }; // Size: 0x0
    Params_HidePanel params{};
    ProcessEvent(func, &params);
}
bool UDebugPanelComponent::SetupShadow(EDebugPanelControlID controlID, FVector2D ShadowOffset, FLinearColor shadowColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetupShadow"));
    struct Params_SetupShadow {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x3];
        FVector2D ShadowOffset; // 0x4
        FLinearColor shadowColor; // 0xc
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SetupShadow params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.ShadowOffset = (FVector2D)ShadowOffset;
    params.shadowColor = (FLinearColor)shadowColor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::PanelVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.PanelVisible"));
    struct Params_PanelVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PanelVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::SetTextAndColor(EDebugPanelControlID controlID, FString Text, FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetTextAndColor"));
    struct Params_SetTextAndColor {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x7];
        FString Text; // 0x8
        FLinearColor Color; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_SetTextAndColor params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.Text = (FString)Text;
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::SetColor(EDebugPanelControlID controlID, FLinearColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.SetColor"));
    struct Params_SetColor {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x3];
        FLinearColor Color; // 0x4
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_SetColor params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.Color = (FLinearColor)Color;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::EnableMultilineText(EDebugPanelControlID controlID, int32_t lineLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.EnableMultilineText"));
    struct Params_EnableMultilineText {
        EDebugPanelControlID controlID; // 0x0
        char pad_1[0x3];
        int32_t lineLimit; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EnableMultilineText params{};
    params.controlID = (EDebugPanelControlID)controlID;
    params.lineLimit = (int32_t)lineLimit;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::IsMultilineText(EDebugPanelControlID controlID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.IsMultilineText"));
    struct Params_IsMultilineText {
        EDebugPanelControlID controlID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMultilineText params{};
    params.controlID = (EDebugPanelControlID)controlID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::DisableMultilineText(EDebugPanelControlID controlID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.DisableMultilineText"));
    struct Params_DisableMultilineText {
        EDebugPanelControlID controlID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DisableMultilineText params{};
    params.controlID = (EDebugPanelControlID)controlID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::CreateUnique(UWorld* onlyForWorld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.CreateUnique"));
    struct Params_CreateUnique {
        UWorld* onlyForWorld; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CreateUnique params{};
    params.onlyForWorld = (UWorld*)onlyForWorld;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::CreateShared(FName ID, UWorld* onlyForWorld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.CreateShared"));
    struct Params_CreateShared {
        FName ID; // 0x0
        UWorld* onlyForWorld; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateShared params{};
    params.ID = (FName)ID;
    params.onlyForWorld = (UWorld*)onlyForWorld;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::Created() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.Created"));
    struct Params_Created {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Created params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::ClearText(EDebugPanelControlID controlID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.ClearText"));
    struct Params_ClearText {
        EDebugPanelControlID controlID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ClearText params{};
    params.controlID = (EDebugPanelControlID)controlID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::ClearScrollingText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.ClearScrollingText"));
    struct Params_ClearScrollingText {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ClearScrollingText params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDebugPanelComponent::AppendTextLine(FString Text) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DebugPanel.DebugPanelComponent.AppendTextLine"));
    struct Params_AppendTextLine {
        FString Text; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AppendTextLine params{};
    params.Text = (FString)Text;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

#include "ABiped_Character.hpp"
#include "AWandTool.hpp"
#include "FSlateBrush.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "USpellBarSlotWidget.hpp"
#include "USpellInstantCastPanelWidget.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
void USpellInstantCastPanelWidget::OnUpdateSpellGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.OnUpdateSpellGroup"));
    struct Params_OnUpdateSpellGroup {
    }; // Size: 0x0
    Params_OnUpdateSpellGroup params{};
    ProcessEvent(func, &params);
}
USpellInstantCastPanelWidget* USpellInstantCastPanelWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellInstantCastPanelWidget");
    return (USpellInstantCastPanelWidget*)res;
}
void USpellInstantCastPanelWidget::UpdateSpellGroup(bool OutAnimDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.UpdateSpellGroup"));
    struct Params_UpdateSpellGroup {
        bool OutAnimDone; // 0x0
    }; // Size: 0x1
    Params_UpdateSpellGroup params{};
    params.OutAnimDone = (bool)OutAnimDone;
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::UpdateAvailableSpellList(bool Next) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.UpdateAvailableSpellList"));
    struct Params_UpdateAvailableSpellList {
        bool Next; // 0x0
    }; // Size: 0x1
    Params_UpdateAvailableSpellList params{};
    params.Next = (bool)Next;
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::UpdateSlotState(bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.UpdateSlotState"));
    struct Params_UpdateSlotState {
        bool IsActive; // 0x0
    }; // Size: 0x1
    Params_UpdateSlotState params{};
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::ShowSpellPanel(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.ShowSpellPanel"));
    struct Params_ShowSpellPanel {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowSpellPanel params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::SetSpellName() {}
void USpellInstantCastPanelWidget::OnUpdateAvailableSpellList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.OnUpdateAvailableSpellList"));
    struct Params_OnUpdateAvailableSpellList {
    }; // Size: 0x0
    Params_OnUpdateAvailableSpellList params{};
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::OnDeactivateWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.OnDeactivateWand"));
    struct Params_OnDeactivateWand {
    }; // Size: 0x0
    Params_OnDeactivateWand params{};
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::OnActivateWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.OnActivateWand"));
    struct Params_OnActivateWand {
    }; // Size: 0x0
    Params_OnActivateWand params{};
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::InitSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.InitSpells"));
    struct Params_InitSpells {
    }; // Size: 0x0
    Params_InitSpells params{};
    ProcessEvent(func, &params);
}
void USpellInstantCastPanelWidget::GetSpellData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellInstantCastPanelWidget.GetSpellData"));
    struct Params_GetSpellData {
    }; // Size: 0x0
    Params_GetSpellData params{};
    ProcessEvent(func, &params);
}

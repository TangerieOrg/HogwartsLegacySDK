#include "FAttackStateInfo.hpp"
#include "FAwareStateInfo.hpp"
#include "FEnemy_AttackThreatData.hpp"
#include "FLinearColor.hpp"
#include "UCallOutComponent.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UScheduledEntity.hpp"
#include "UWidget.hpp"
#include "UWidgetComponent.hpp"
void UCallOutComponent::ShowWidgetForThisCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.ShowWidgetForThisCallout"));
    struct Params_ShowWidgetForThisCallout {
    }; // Size: 0x0
    Params_ShowWidgetForThisCallout params{};
    ProcessEvent(func, &params);
}
UCallOutComponent* UCallOutComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CallOutComponent");
    return (UCallOutComponent*)res;
}
void UCallOutComponent::UpdateCallOutUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
    }; // Size: 0x0
    Params_UpdateCallOutUI params{};
    ProcessEvent(func, &params);
}
void UCallOutComponent::OnOutroEnded(UPhoenixUserWidget* BaseItem, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.OnOutroEnded"));
    struct Params_OnOutroEnded {
        UPhoenixUserWidget* BaseItem; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnOutroEnded params{};
    params.BaseItem = (UPhoenixUserWidget*)BaseItem;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UCallOutComponent::AttackThreatDataHandler(UObject* i_caller, FEnemy_AttackThreatData& AttackThreatData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.AttackThreatDataHandler"));
    struct Params_AttackThreatDataHandler {
        UObject* i_caller; // 0x0
        FEnemy_AttackThreatData AttackThreatData; // 0x8
    }; // Size: 0x60
    Params_AttackThreatDataHandler params{};
    params.i_caller = (UObject*)i_caller;
    params.AttackThreatData = (FEnemy_AttackThreatData)AttackThreatData;
    ProcessEvent(func, &params);
    AttackThreatData = params.AttackThreatData;
}
void UCallOutComponent::HideWidgetForThisCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.HideWidgetForThisCallout"));
    struct Params_HideWidgetForThisCallout {
    }; // Size: 0x0
    Params_HideWidgetForThisCallout params{};
    ProcessEvent(func, &params);
}
void UCallOutComponent::AwareStateInfoHandler(UObject* i_caller, FAwareStateInfo& AwareStateInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CallOutComponent.AwareStateInfoHandler"));
    struct Params_AwareStateInfoHandler {
        UObject* i_caller; // 0x0
        FAwareStateInfo AwareStateInfo; // 0x8
    }; // Size: 0x10
    Params_AwareStateInfoHandler params{};
    params.i_caller = (UObject*)i_caller;
    params.AwareStateInfo = (FAwareStateInfo)AwareStateInfo;
    ProcessEvent(func, &params);
    AwareStateInfo = params.AwareStateInfo;
}

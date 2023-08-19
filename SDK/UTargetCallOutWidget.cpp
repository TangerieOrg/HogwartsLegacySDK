#include "AActor.hpp"
#include "UCallOutComponent.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UTargetCallOutWidget.hpp"
#include "UWidget.hpp"
UTargetCallOutWidget* UTargetCallOutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetCallOutWidget");
    return (UTargetCallOutWidget*)res;
}
float UTargetCallOutWidget::GetOutroDuration(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.GetOutroDuration"));
    struct Params_GetOutroDuration {
        int32_t OutroType; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetOutroDuration params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTargetCallOutWidget::UpdateCallOutUI(FName CharacterID, float BarPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
        FName CharacterID; // 0x0
        float BarPercent; // 0x8
    }; // Size: 0xc
    Params_UpdateCallOutUI params{};
    params.CharacterID = (FName)CharacterID;
    params.BarPercent = (float)BarPercent;
    ProcessEvent(func, &params);
}
void UTargetCallOutWidget::ShowWidget(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.ShowWidget"));
    struct Params_ShowWidget {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_ShowWidget params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
UWidget* UTargetCallOutWidget::GetOffscreenIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.GetOffscreenIndicator"));
    struct Params_GetOffscreenIndicator {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffscreenIndicator params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UTargetCallOutWidget::SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.SetupWidget"));
    struct Params_SetupWidget {
        AActor* Parent; // 0x0
        UCallOutComponent* CallOutComponent; // 0x8
    }; // Size: 0x10
    Params_SetupWidget params{};
    params.Parent = (AActor*)Parent;
    params.CallOutComponent = (UCallOutComponent*)CallOutComponent;
    ProcessEvent(func, &params);
}
void UTargetCallOutWidget::SetIsOffscreenCallout(bool IsOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.SetIsOffscreenCallout"));
    struct Params_SetIsOffscreenCallout {
        bool IsOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetIsOffscreenCallout params{};
    params.IsOffscreen = (bool)IsOffscreen;
    ProcessEvent(func, &params);
}
void UTargetCallOutWidget::SetHasOffscreenProxyActive(bool HasOffscreenProxy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.SetHasOffscreenProxyActive"));
    struct Params_SetHasOffscreenProxyActive {
        bool HasOffscreenProxy; // 0x0
    }; // Size: 0x1
    Params_SetHasOffscreenProxyActive params{};
    params.HasOffscreenProxy = (bool)HasOffscreenProxy;
    ProcessEvent(func, &params);
}
void UTargetCallOutWidget::AwareStateInfoChanged(bool bFromUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.AwareStateInfoChanged"));
    struct Params_AwareStateInfoChanged {
        bool bFromUpdate; // 0x0
    }; // Size: 0x1
    Params_AwareStateInfoChanged params{};
    params.bFromUpdate = (bool)bFromUpdate;
    ProcessEvent(func, &params);
}
void UTargetCallOutWidget::AttackThreatDataChange(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetCallOutWidget.AttackThreatDataChange"));
    struct Params_AttackThreatDataChange {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_AttackThreatDataChange params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}

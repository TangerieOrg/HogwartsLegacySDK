#include "EMenuPlacement.hpp"
#include "FVector2D.hpp"
#include "UClass.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UMenuAnchor.hpp"
#include "UUserWidget.hpp"
void UMenuAnchor::Open(bool bFocusMenu) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.Open"));
    struct Params_Open {
        bool bFocusMenu; // 0x0
    }; // Size: 0x1
    Params_Open params{};
    params.bFocusMenu = (bool)bFocusMenu;
    ProcessEvent(func, &params);
}
UMenuAnchor* UMenuAnchor::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MenuAnchor");
    return (UMenuAnchor*)res;
}
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.ToggleOpen"));
    struct Params_ToggleOpen {
        bool bFocusOnOpen; // 0x0
    }; // Size: 0x1
    Params_ToggleOpen params{};
    params.bFocusOnOpen = (bool)bFocusOnOpen;
    ProcessEvent(func, &params);
}
UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature"));
    struct Params_GetUserWidget__DelegateSignature {
        UUserWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUserWidget__DelegateSignature params{};
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
bool UMenuAnchor::ShouldOpenDueToClick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick"));
    struct Params_ShouldOpenDueToClick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldOpenDueToClick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMenuAnchor::HasOpenSubMenus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.HasOpenSubMenus"));
    struct Params_HasOpenSubMenus {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasOpenSubMenus params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMenuAnchor::SetPlacement(EMenuPlacement InPlacement) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.SetPlacement"));
    struct Params_SetPlacement {
        EMenuPlacement InPlacement; // 0x0
    }; // Size: 0x1
    Params_SetPlacement params{};
    params.InPlacement = (EMenuPlacement)InPlacement;
    ProcessEvent(func, &params);
}
bool UMenuAnchor::IsOpen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.IsOpen"));
    struct Params_IsOpen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOpen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UMenuAnchor::GetMenuPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.GetMenuPosition"));
    struct Params_GetMenuPosition {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMenuPosition params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMenuAnchor::FitInWindow(bool bFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.FitInWindow"));
    struct Params_FitInWindow {
        bool bFit; // 0x0
    }; // Size: 0x1
    Params_FitInWindow params{};
    params.bFit = (bool)bFit;
    ProcessEvent(func, &params);
}
void UMenuAnchor::Close() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MenuAnchor.Close"));
    struct Params_Close {
    }; // Size: 0x0
    Params_Close params{};
    ProcessEvent(func, &params);
}

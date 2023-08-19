#include "APlayerController.hpp"
#include "FGeometry.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UBorderSlot.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UGridSlot.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "USafeZoneSlot.hpp"
#include "UScaleBoxSlot.hpp"
#include "UScrollBoxSlot.hpp"
#include "USizeBoxSlot.hpp"
#include "UUniformGridSlot.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidget.hpp"
#include "UWidgetLayoutLibrary.hpp"
#include "UWidgetSwitcherSlot.hpp"
#include "UWrapBoxSlot.hpp"
UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot"));
    struct Params_SlotAsBorderSlot {
        UWidget* Widget; // 0x0
        UBorderSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsBorderSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBorderSlot*)params.ReturnValue;
}
UWidgetLayoutLibrary* UWidgetLayoutLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetLayoutLibrary");
    return (UWidgetLayoutLibrary*)res;
}
UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot"));
    struct Params_SlotAsOverlaySlot {
        UWidget* Widget; // 0x0
        UOverlaySlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsOverlaySlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UOverlaySlot*)params.ReturnValue;
}
UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot"));
    struct Params_SlotAsScaleBoxSlot {
        UWidget* Widget; // 0x0
        UScaleBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsScaleBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UScaleBoxSlot*)params.ReturnValue;
}
UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot"));
    struct Params_SlotAsScrollBoxSlot {
        UWidget* Widget; // 0x0
        UScrollBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsScrollBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UScrollBoxSlot*)params.ReturnValue;
}
UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot"));
    struct Params_SlotAsWrapBoxSlot {
        UWidget* Widget; // 0x0
        UWrapBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsWrapBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWrapBoxSlot*)params.ReturnValue;
}
FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry"));
    struct Params_GetPlayerScreenWidgetGeometry {
        APlayerController* PlayerController; // 0x0
        FGeometry ReturnValue; // 0x8
    }; // Size: 0x40
    Params_GetPlayerScreenWidgetGeometry params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGeometry)params.ReturnValue;
}
UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot"));
    struct Params_SlotAsWidgetSwitcherSlot {
        UWidget* Widget; // 0x0
        UWidgetSwitcherSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsWidgetSwitcherSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UWidgetSwitcherSlot*)params.ReturnValue;
}
UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot"));
    struct Params_SlotAsVerticalBoxSlot {
        UWidget* Widget; // 0x0
        UVerticalBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsVerticalBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UVerticalBoxSlot*)params.ReturnValue;
}
UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot"));
    struct Params_SlotAsGridSlot {
        UWidget* Widget; // 0x0
        UGridSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsGridSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGridSlot*)params.ReturnValue;
}
USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot"));
    struct Params_SlotAsSizeBoxSlot {
        UWidget* Widget; // 0x0
        USizeBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsSizeBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USizeBoxSlot*)params.ReturnValue;
}
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition"));
    struct Params_ProjectWorldLocationToWidgetPosition {
        APlayerController* PlayerController; // 0x0
        FVector WorldLocation; // 0x8
        FVector2D ScreenPosition; // 0x14
        bool bPlayerViewportRelative; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_ProjectWorldLocationToWidgetPosition params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.WorldLocation = (FVector)WorldLocation;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.bPlayerViewportRelative = (bool)bPlayerViewportRelative;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScreenPosition = params.ScreenPosition;
    return (bool)params.ReturnValue;
}
UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot"));
    struct Params_SlotAsUniformGridSlot {
        UWidget* Widget; // 0x0
        UUniformGridSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsUniformGridSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUniformGridSlot*)params.ReturnValue;
}
USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot"));
    struct Params_SlotAsSafeBoxSlot {
        UWidget* Widget; // 0x0
        USafeZoneSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsSafeBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USafeZoneSlot*)params.ReturnValue;
}
UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot"));
    struct Params_SlotAsHorizontalBoxSlot {
        UWidget* Widget; // 0x0
        UHorizontalBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsHorizontalBoxSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UHorizontalBoxSlot*)params.ReturnValue;
}
UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(UWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot"));
    struct Params_SlotAsCanvasSlot {
        UWidget* Widget; // 0x0
        UCanvasPanelSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SlotAsCanvasSlot params{};
    params.Widget = (UWidget*)Widget;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCanvasPanelSlot*)params.ReturnValue;
}
void UWidgetLayoutLibrary::RemoveAllWidgets(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets"));
    struct Params_RemoveAllWidgets {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_RemoveAllWidgets params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry"));
    struct Params_GetViewportWidgetGeometry {
        UObject* WorldContextObject; // 0x0
        FGeometry ReturnValue; // 0x8
    }; // Size: 0x40
    Params_GetViewportWidgetGeometry params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGeometry)params.ReturnValue;
}
FVector2D UWidgetLayoutLibrary::GetViewportSize(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize"));
    struct Params_GetViewportSize {
        UObject* WorldContextObject; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetViewportSize params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UWidgetLayoutLibrary::GetViewportScale(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale"));
    struct Params_GetViewportScale {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetViewportScale params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI"));
    struct Params_GetMousePositionScaledByDPI {
        APlayerController* Player; // 0x0
        float LocationX; // 0x8
        float LocationY; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetMousePositionScaledByDPI params{};
    params.Player = (APlayerController*)Player;
    params.LocationX = (float)LocationX;
    params.LocationY = (float)LocationY;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LocationX = params.LocationX;
    LocationY = params.LocationY;
    return (bool)params.ReturnValue;
}
FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport"));
    struct Params_GetMousePositionOnViewport {
        UObject* WorldContextObject; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMousePositionOnViewport params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform"));
    struct Params_GetMousePositionOnPlatform {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMousePositionOnPlatform params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}

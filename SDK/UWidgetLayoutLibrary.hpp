#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UWidgetSwitcherSlot;
class UWrapBoxSlot;
class UWidget;
class UUniformGridSlot;
class UVerticalBoxSlot;
class USizeBoxSlot;
class UCanvasPanelSlot;
class UScrollBoxSlot;
class UScaleBoxSlot;
class USafeZoneSlot;
class UOverlaySlot;
class UHorizontalBoxSlot;
class UGridSlot;
class UBorderSlot;
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary {
public:
    static UWidgetLayoutLibrary* StaticClass();
    static UWrapBoxSlot* SlotAsWrapBoxSlot(UWidget* Widget);
    static UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(UWidget* Widget);
    static UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);
    static UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);
    static USizeBoxSlot* SlotAsSizeBoxSlot(UWidget* Widget);
    static UScrollBoxSlot* SlotAsScrollBoxSlot(UWidget* Widget);
    static UScaleBoxSlot* SlotAsScaleBoxSlot(UWidget* Widget);
    static USafeZoneSlot* SlotAsSafeBoxSlot(UWidget* Widget);
    static UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);
    static UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);
    static UGridSlot* SlotAsGridSlot(UWidget* Widget);
    static UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);
    static UBorderSlot* SlotAsBorderSlot(UWidget* Widget);
    static void RemoveAllWidgets(UObject* WorldContextObject);
    static bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    static FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);
    static FVector2D GetViewportSize(UObject* WorldContextObject);
    static float GetViewportScale(UObject* WorldContextObject);
    static FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);
    static bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY);
    static FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);
    static FVector2D GetMousePositionOnPlatform();
}; // Size: 0x28
#pragma pack(pop)

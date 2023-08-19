#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EMouseLockMode.hpp"
#include "EUIPopupPriority.hpp"
#include "EUIScreenType.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UScreen : public UPhoenixUserWidget {
public:
    EUIScreenType ScreenType; // 0x328
    EUIPopupPriority PopupPriority; // 0x329
    bool ShouldShowCursor; // 0x32a
    bool ShouldHideCursorOnRemove; // 0x32b
    FVector2D CursorPositionOverride; // 0x32c
    bool HandleBackButton; // 0x334
    EMouseLockMode MouseLockMode; // 0x335
    bool bAutoAcquireUMGFocus; // 0x336
    char pad_337[0x1];
    TArray<EUMGInputAction> IgnoredFocusInputActions; // 0x338
    TArray<EUMGInputAxis> IgnoredFocusInputAxis; // 0x348
    char pad_358[0x18];
    static UScreen* StaticClass();
    void ScreenUnregisterAllUMGInputAxis();
    void ScreenUnregisterAllUMGInputActions(EInputEvent InputEvent);
    void ScreenRegisterAllUMGInputAxis();
    void ScreenRegisterAllUMGInputActions(EInputEvent InputEvent);
    void OnScreenOutroComplete(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    bool IsInputEnabled();
    static int32_t GetZOrderOffsetForScreenType(EUIScreenType InScreenType);
    void GatherMastermindExtraScreenStrings(TArray<FString>& outExtraScreenStrings);
    void CloseScreenWithOutro();
    void ClassLoaded();
}; // Size: 0x370
#pragma pack(pop)

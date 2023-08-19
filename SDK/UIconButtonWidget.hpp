#pragma once
#include <cstdint>
#include "EFactsheetItemType.hpp"
#include "EIconButtonState.hpp"
#include "EUIAsyncLoadPriority.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UButton;
class UImage;
class UTexture2D;
class UObject;
class UWidget;
#pragma pack(push, 1)
class UIconButtonWidget : public UPhoenixUserWidget {
public:
    float IconScale; // 0x328
    char pad_32c[0x4];
    FString IconName; // 0x330
    FString BackgroundIconName; // 0x340
    EIconButtonState IconButtonState; // 0x350
    char pad_351[0x3];
    FName DataField; // 0x354
    FName DataField2; // 0x35c
    FVector2D Size; // 0x364
    char pad_36c[0x4];
    UButton* TheButton; // 0x370
    UImage* TheImage; // 0x378
    UImage* hexBack; // 0x380
    char pad_388[0x108];
    FString LastRequestedImageName; // 0x490
    bool LastRequestedMatchSize; // 0x4a0
    char pad_4a1[0x7];
    static UIconButtonWidget* StaticClass();
    void TryResolveImage(bool bAsyncLoadIfFail, EUIAsyncLoadPriority OptionalPriority);
    bool SetState(bool IsActive);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void SetIsNew(bool bIsNew);
    void SetImage(FString ImageName, bool MatchSize, EUIAsyncLoadPriority OptionalPriority);
    void SetHexBack(FString ImageName);
    void SetFactsheetItemType(EFactsheetItemType Type);
    void SetButtonStatus(FString StateImage, bool StateImageVisible, FString StateHexBack, bool StateEnabled);
    void SetButtonState(EIconButtonState NewState);
    void SetButtonSize(FVector2D NewSize);
    bool SetButtonIcons(FString BackgroundImage);
    bool RemoveExtraContent();
    void OnSynchronizeProperties();
    void OnSelectionChanged(bool selected);
    void OnImageLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void HighlightButton(bool isHighlighted);
    bool HandleNonExistent();
    bool HandleMissing();
    bool HandleEnabled();
    bool HandleDisabled();
    EFactsheetItemType GetFactsheetItemType();
    FString GetFactsheetItemName();
    FString GetFactsheetItemDesc();
    UWidget* GetExtraContent();
    void ButtonUnhovered();
    void ButtonReleased();
    void ButtonPressed();
    void ButtonHovered();
    void ButtonClicked();
    bool AddExtraContent(UWidget* NewContent);
}; // Size: 0x4a8
#pragma pack(pop)

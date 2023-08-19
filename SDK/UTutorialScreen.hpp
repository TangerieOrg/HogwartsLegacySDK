#pragma once
#include <cstdint>
#include "ETutorialTransparency.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FVector2D.hpp"
#include "UScreen.hpp"
class UMediaSource;
#pragma pack(push, 1)
class UTutorialScreen : public UScreen {
public:
    FName TutorialName; // 0x370
    FName TutorialAlias; // 0x378
    int32_t TutorialStep; // 0x380
    ETutorialTransparency TransparencyType; // 0x384
    char pad_385[0x53];
    static UTutorialScreen* StaticClass();
    void SetTutorialVideoReady(UMediaSource* MediaSource);
    void SetTutorialVideoIsLoading(bool IsLoading);
    void SetTutorialTitle(FString TitleString, bool IsTranslatable);
    void SetTutorialLegendItems(TArray<FLegendItemData>& LegendItems);
    void SetTutorialImageName(FString ImageString);
    void SetTutorialExpiryTimerProgress(float Progress);
    void SetTutorialCompletionAction(EUMGInputAction InputAction, bool bMustHold);
    void SetTutorialBody(FString BodyString, bool IsTranslatable);
    void OnSetTutorialPosition(FVector2D Position, FVector2D Alignment);
}; // Size: 0x3d8
#pragma pack(pop)

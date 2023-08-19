#pragma once
#include <cstdint>
#include "ELoadingScreenLocation.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UTexture2D;
#pragma pack(push, 1)
class ULoadingcreen : public UPhoenixUserWidget {
public:
    UImage* LoadingImage; // 0x328
    TArray<FString> Tips; // 0x330
    FString BackgroundID; // 0x340
    TArray<FString> DebugBackgroundIDs; // 0x350
    char pad_360[0x18];
    static ULoadingcreen* StaticClass();
    void SetTextureByName(FString Name);
    void SetTexture(UTexture2D* Texture);
    void PickBackgroundID(ELoadingScreenLocation DestinationLocation);
    void OnDisplayNextTip(FString TipKey);
    void GenerateTipList(ELoadingScreenLocation DestinationLocation);
    void DisplayPrevTip();
    void DisplayNextTip();
}; // Size: 0x378
#pragma pack(pop)

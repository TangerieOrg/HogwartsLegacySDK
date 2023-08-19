#pragma once
#include <cstdint>
#include "EBeaconType.hpp"
#include "EMapFadeState.hpp"
#include "EMapIconState.hpp"
#include "EMapToolTipTypes.hpp"
#include "FHoverDataEvent.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UBeaconInfo;
class UMapIconWidget;
class AMapFilterRegion;
class UMapIconInstance;
class UTexture2D;
#pragma pack(push, 1)
class UMapIcon : public UObject {
public:
    UBeaconInfo* BeaconInfo; // 0x28
    char pad_30[0x8];
    UMapIconWidget* NameWidget; // 0x38
    AMapFilterRegion* FilterRegion; // 0x40
    UTexture2D* FilterRegionTexture; // 0x48
    UTexture2D* Texture; // 0x50
    char pad_58[0x50];
    EMapToolTipTypes IconType; // 0xa8
    char pad_a9[0x3];
    FHoverDataEvent EventData; // 0xac
    char pad_bc[0xac];
    UMapIconInstance* IconInstance; // 0x168
    UMapIconInstance* IconInstanceBadge; // 0x170
    char pad_178[0x10];
    static UMapIcon* StaticClass();
    void StopAnimationAndChain(EMapIconState NextState);
    void StopAnimation();
    void SetTargetScale(float Scale);
    void SetTargetColor(FLinearColor pTargetColor);
    void SetState(EMapIconState IconState, bool SaveState);
    void SetStartingScale(float Scale);
    void SetScale(float ScaleIn);
    void SetIconVisibility(bool pVisbility);
    void SetIconPriority(int32_t Priority);
    void SetIconFlags(int32_t flags);
    void SetIconBadgeVisibility(bool pVisbility);
    void SetColor(FLinearColor ColorIn);
    void SetBadgeName(FString pBadgeName);
    bool IsStopping();
    bool IsBadgeStopping();
    float GetTargetScale();
    EMapIconState GetState();
    float GetStartingScale();
    int32_t GetIconPriority();
    int32_t GetIconFlags();
    EMapFadeState GetFadeState();
    FVector GetBeaconWorldPosition();
    EBeaconType GetBeaconType();
    FString GetBeaconName();
    FString GetBeaconIcon();
    FString GetBeaconFastTravelLocationID();
    FString GetBeaconDescShort();
    void ExcludeIconFromStackedFade(bool pExcludeFromStackedFade);
}; // Size: 0x188
#pragma pack(pop)

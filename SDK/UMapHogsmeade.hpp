#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UMapBase.hpp"
class UHogsmeadeMaterialFade;
class UHogsmeadeMapScreen;
#pragma pack(push, 1)
class UMapHogsmeade : public UMapBase {
public:
    char pad_940[0x8];
    TArray<UHogsmeadeMaterialFade*> MaterialFades; // 0x948
    char pad_958[0x4];
    float ZoomFactorTier1; // 0x95c
    float ZoomFactorTier2; // 0x960
    float ZoomFactorTier3; // 0x964
    float ZoomFactorTier4; // 0x968
    float ZoomFactorTier5; // 0x96c
    FLinearColor MapIconDiscoveredColor; // 0x970
    FLinearColor MapIconColor; // 0x980
    float DefaultIconScale; // 0x990
    float CursorScale; // 0x994
    float CursorScaleFactor; // 0x998
    FVector DecalSize; // 0x99c
    char pad_9a8[0x8];
    FVector4 MapBounds; // 0x9b0
    FVector4 MapScreenBounds; // 0x9c0
    FVector HogsmeadeCenter; // 0x9d0
    char pad_9dc[0x4];
    static UMapHogsmeade* StaticClass();
    void RemoveWayMarkerBP();
    UHogsmeadeMapScreen* GetMapScreenWidget();
    void DoFastTravel();
}; // Size: 0x9e0
#pragma pack(pop)

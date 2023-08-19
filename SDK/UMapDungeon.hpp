#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UMapBase.hpp"
class AMapDungeonActor;
class UClass;
class UDungeonMapScreen;
#pragma pack(push, 1)
class UMapDungeon : public UMapBase {
public:
    AMapDungeonActor* DungeonMapActor; // 0x940
    UClass* MapNavActorClass; // 0x948
    UDungeonMapScreen* MapWidget; // 0x950
    char pad_958[0x18];
    float DefaultIconScale; // 0x970
    FLinearColor MapIconDiscoveredColor; // 0x974
    FLinearColor MapIconColor; // 0x984
    float MapIconTier4ScaleFactor; // 0x994
    float MaxZoomDistance; // 0x998
    float MaxRadius; // 0x99c
    float CursorScale; // 0x9a0
    float CursorScaleFactor; // 0x9a4
    char pad_9a8[0x8];
    FVector4 MapBounds; // 0x9b0
    FVector4 MapScreenBounds; // 0x9c0
    FVector DecalSize; // 0x9d0
    char pad_9dc[0x4];
    static UMapDungeon* StaticClass();
    UDungeonMapScreen* GetMapScreenWidget();
    AMapDungeonActor* GetDungeonMapActor();
    void DungeonShowAll(bool Show);
}; // Size: 0x9e0
#pragma pack(pop)

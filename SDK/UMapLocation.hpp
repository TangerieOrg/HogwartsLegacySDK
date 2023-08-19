#pragma once
#include <cstdint>
#include "FMarkupData.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AMapLocationActor;
class UMapMarkupComponent;
#pragma pack(push, 1)
class UMapLocation : public UObject {
public:
    AMapLocationActor* locationActor; // 0x28
    UMapMarkupComponent* MapMarkupComponent; // 0x30
    char pad_38[0x58];
    TArray<UMapLocation*> Children; // 0x90
    static UMapLocation* StaticClass();
    void SetParent(UMapLocation* ParentIn);
    void SetIsPrimary(bool IsPrimaryIn);
    UMapLocation* RemoveLocation(UMapLocation* LocationIn);
    bool IsRoot();
    bool IsPrimary();
    float GetVolume();
    FRotator GetRotation();
    UMapLocation* GetPrimaryInTree();
    UMapLocation* GetParent();
    UMapMarkupComponent* GetMapMarkupComponent();
    FString GetLocationId();
    UMapLocation* GetLocationByName(FString LocationName);
    AMapLocationActor* GetLocationActor();
    FVector GetLocation();
    FVector GetExtent();
    TArray<UMapLocation*> GetChildren();
    FVector GetCenter();
    int32_t Depth();
    static UMapLocation* CreateLocationUsingComponent(FString RegionIn, AMapLocationActor* LocationActorIn, FMarkupData MarkupDataIn);
    static UMapLocation* CreateLocation(FString RegionIn, FString LocationIdIn, FVector LocationIn, FVector ExtentIn, FRotator RotationIn, FMarkupData MarkupDataIn);
    bool ContainsPoint(FVector Point);
    bool ContainsLocation(FString LocationIdIn);
    bool AddLocation(UMapLocation* MapLocation);
}; // Size: 0xa0
#pragma pack(pop)

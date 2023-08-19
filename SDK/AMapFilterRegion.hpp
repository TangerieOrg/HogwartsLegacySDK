#pragma once
#include <cstdint>
#include "ADecalActor.hpp"
class UMaterialInterface;
class UTexture2D;
#pragma pack(push, 1)
class AMapFilterRegion : public ADecalActor {
public:
    UMaterialInterface* Material; // 0x250
    char pad_258[0x18];
    static AMapFilterRegion* StaticClass();
    void SetTexture(UTexture2D* inTexture);
    FString GetName();
}; // Size: 0x270
#pragma pack(pop)

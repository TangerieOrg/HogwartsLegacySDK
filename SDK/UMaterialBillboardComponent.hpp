#pragma once
#include <cstdint>
#include "FMaterialSpriteElement.hpp"
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
class UCurveFloat;
#pragma pack(push, 1)
class UMaterialBillboardComponent : public UPrimitiveComponent {
public:
    TArray<FMaterialSpriteElement> Elements; // 0x480
    static UMaterialBillboardComponent* StaticClass();
    void SetElements(TArray<FMaterialSpriteElement>& NewElements);
    void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);
}; // Size: 0x490
#pragma pack(pop)

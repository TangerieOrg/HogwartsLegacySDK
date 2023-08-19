#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
class UMaterialInterface;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ASanctuaryDesk : public ATransfigurationObjectBase {
public:
    UMaterialInterface* InkWritingMaterial; // 0x2a8
    UMaterialInterface* InkWritingBackSideMaterial; // 0x2b0
    UCurveFloat* InkWritingCurve; // 0x2b8
    UMaterialInstanceDynamic* FrontMaterialInstance; // 0x2c0
    UMaterialInstanceDynamic* BackMaterialInstance; // 0x2c8
    char pad_2d0[0x10];
    static ASanctuaryDesk* StaticClass();
    void ClearPage(bool bFrontSide);
    void BeginWritingPage();
    void ApplyMaterialsToPaper(UPrimitiveComponent* InPaperComponent);
}; // Size: 0x2e0
#pragma pack(pop)

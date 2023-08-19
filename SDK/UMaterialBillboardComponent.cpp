#include "FMaterialSpriteElement.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
void UMaterialBillboardComponent::SetElements(TArray<FMaterialSpriteElement>& NewElements) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialBillboardComponent.SetElements"));
    struct Params_SetElements {
        TArray<FMaterialSpriteElement> NewElements; // 0x0
    }; // Size: 0x10
    Params_SetElements params{};
    params.NewElements = (TArray<FMaterialSpriteElement>)NewElements;
    ProcessEvent(func, &params);
    NewElements = params.NewElements;
}
UMaterialBillboardComponent* UMaterialBillboardComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialBillboardComponent");
    return (UMaterialBillboardComponent*)res;
}
void UMaterialBillboardComponent::AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialBillboardComponent.AddElement"));
    struct Params_AddElement {
        UMaterialInterface* Material; // 0x0
        UCurveFloat* DistanceToOpacityCurve; // 0x8
        bool bSizeIsInScreenSpace; // 0x10
        char pad_11[0x3];
        float BaseSizeX; // 0x14
        float BaseSizeY; // 0x18
        char pad_1c[0x4];
        UCurveFloat* DistanceToSizeCurve; // 0x20
    }; // Size: 0x28
    Params_AddElement params{};
    params.Material = (UMaterialInterface*)Material;
    params.DistanceToOpacityCurve = (UCurveFloat*)DistanceToOpacityCurve;
    params.bSizeIsInScreenSpace = (bool)bSizeIsInScreenSpace;
    params.BaseSizeX = (float)BaseSizeX;
    params.BaseSizeY = (float)BaseSizeY;
    params.DistanceToSizeCurve = (UCurveFloat*)DistanceToSizeCurve;
    ProcessEvent(func, &params);
}

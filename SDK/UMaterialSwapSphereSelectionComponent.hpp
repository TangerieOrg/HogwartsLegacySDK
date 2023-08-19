#pragma once
#include <cstdint>
#include "EMaterialSwapSphereSelectionType.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapActorRules.hpp"
#include "FMaterialSwapInfo.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "USceneComponent.hpp"
class UTexture;
struct FMaterialSwapParameters;
class AActor;
#pragma pack(push, 1)
class UMaterialSwapSphereSelectionComponent : public USceneComponent {
public:
    char pad_220[0x8];
    float SphereRadiusMeters; // 0x228
    float UnswapDelaySeconds; // 0x22c
    FMaterialSwapActorRules ActorEventRules; // 0x230
    char pad_270[0x28];
    FName SwapSphereMaterialParameter; // 0x298
    bool bSwapSphereMaterialParameter; // 0x2a0
    bool bSwapOwner; // 0x2a1
    char pad_2a2[0x6];
    FMaterialSwapInfo SwapInfo; // 0x2a8
    char pad_428[0xa8];
    FVector4 SwapSphereMaterialParameterValue; // 0x4d0
    bool bSwapping; // 0x4e0
    char pad_4e1[0x1f];
    static UMaterialSwapSphereSelectionComponent* StaticClass();
    bool Swapping();
    int32_t Swapped();
    void StartSwapping(FMaterialSwapInfo& NewSwapInfo);
    void SetVectorParameter(FName Name, FVector Value);
    void SetVector4Parameter(FName Name, FVector4 Value);
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetScalarParameter(FName Name, float Value);
    void SetParameters(FMaterialSwapParameters& Params);
    void SetColorParameter(FName Name, FLinearColor Value);
    void IsWeatherOnly(bool& OnlySwappingWeather);
    bool IsInside(AActor* Actor);
    void GetCurrentSwapInfo(FMaterialSwapInfo& CurrentSwapInfo);
    void EndSwapping();
}; // Size: 0x500
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UChaosClothingInteractor;
class USkeletalMesh;
struct FVector2DClothInteractorValue;
class UChaosClothSharedSimConfig;
class UChaosClothConfig;
struct FVectorClothInteractorValue;
struct FIntClothInteractorValue;
struct FFloatClothInteractorValue;
struct FBoolClothInteractorValue;
#pragma pack(push, 1)
class UClothInteractorBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UClothInteractorBlueprintLibrary* StaticClass();
    static UChaosClothSharedSimConfig* GetChaosClothSharedSimConfig(USkeletalMesh* SkeletalMesh, UChaosClothingInteractor* ChaosClothingInteractor);
    static UChaosClothConfig* GetChaosClothConfig(USkeletalMesh* SkeletalMesh, UChaosClothingInteractor* ChaosClothingInteractor);
    static FVector EvaluateVectorClothInteractorValue(FVectorClothInteractorValue& ClothInteractorValue, FVector& DefaultValue, float BlendAlpha);
    static FVector2D EvaluateVector2DClothInteractorValue(FVector2DClothInteractorValue& ClothInteractorValue, FVector2D& DefaultValue, float BlendAlpha);
    static int32_t EvaluateIntClothInteractorValue(FIntClothInteractorValue& ClothInteractorValue, int32_t& DefaultValue, float BlendAlpha);
    static float EvaluateFloatClothInteractorValue(FFloatClothInteractorValue& ClothInteractorValue, float& DefaultValue, float BlendAlpha);
    static bool EvaluateBoolClothInteractorValue(FBoolClothInteractorValue& ClothInteractorValue, bool& DefaultValue, float BlendAlpha);
}; // Size: 0x28
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialSwapRules.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UClass;
struct FMaterialSwapParameters;
class ASkinFXDefinition;
class AActor;
class USkinFXComponent;
class UTexture;
#pragma pack(push, 1)
class USkinFX : public UBlueprintFunctionLibrary {
public:
    static USkinFX* StaticClass();
    static FMaterialPermuterKey SkinFXNameMaterialPermuterKey(FName FX);
    static void SkinFXName(UClass* FX, FName& Name);
    static FMaterialPermuterKey SkinFXMaterialPermuterKey(UClass* FX);
    static FMaterialPermuterKey SkinFXEffectMaterialPermuterKey(ASkinFXDefinition* Effect);
    static void EffectName(UClass* FX, FName& Name);
    static void ActorUpdateSkinFXRules(AActor* Actor, FName FX, FMaterialSwapRules newRules, bool& Result);
    static void ActorStartSkinFXWithRulesAndInitialParameters(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, FMaterialSwapRules swapRules, FMaterialSwapParameters& parameterValues, bool detachAndDestroyWhenDone);
    static void ActorStartSkinFXWithRules(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, FMaterialSwapRules swapRules, bool detachAndDestroyWhenDone);
    static void ActorStartSkinFXWithInitialParameters(AActor* Actor, FName StartFX, FMaterialSwapParameters& parameterValues, USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone);
    static void ActorStartSkinFX(AActor* Actor, USkinFXComponent*& SkinFXComponent, FName StartFX, bool detachAndDestroyWhenDone);
    static void ActorSetSkinFXTimeFactor(AActor* Actor, FName FXName, float TimeFactor, bool& Success);
    static void ActorSetExternalVectorParameter(AActor* Actor, FName FXName, FName ParameterName, FVector Value, float packAlpha);
    static void ActorSetExternalTextureParameter(AActor* Owner, FName FXName, FName ParameterName, UTexture* Value);
    static void ActorSetExternalScalarParameter(AActor* Actor, FName FXName, FName ParameterName, float Value);
    static void ActorSetExternalParameters(AActor* Actor, FName FXName, FMaterialSwapParameters& parameterValues);
    static void ActorSetExternalColorParameter(AActor* Actor, FName FXName, FName ParameterName, FLinearColor Value);
    static void ActorIsSkinFXRunning(AActor* Actor, FName FXName, bool& IsRunning);
    static void ActorGetSkinFXTimeFactor(AActor* Actor, FName FXName, float& TimeFactor);
    static void ActorGetSkinFX(AActor* Actor, USkinFXComponent*& SkinFXComponent);
    static void ActorEndSkinFX(AActor* Actor, FName endFX, ESkinFXEffectEndStyle EndStyle);
    static void ActorEndAllSkinFX(AActor* Actor, ESkinFXEffectEndStyle EndStyle);
    static void ActorAnySkinFXRunning(AActor* Actor, bool& IsRunning);
    static void ActorAddSkinFXComponent(AActor* Actor, USkinFXComponent*& SkinFXComponent, bool detachAndDestroyWhenDone);
}; // Size: 0x28
#pragma pack(pop)

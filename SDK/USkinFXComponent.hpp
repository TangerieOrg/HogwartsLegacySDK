#pragma once
#include <cstdint>
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapRules.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "FSkinFXExternalContext.hpp"
#include "FSkinFXRunningEffectInstance.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UClass;
struct FMaterialSwapParameters;
class UTexture;
class ASkinFXDefinitionGraph;
#pragma pack(push, 1)
class USkinFXComponent : public UActorComponent {
public:
    char pad_c8[0x10];
    TArray<FSkinFXRunningEffectInstance> EffectStack; // 0xd8
    TArray<FSkinFXExternalContext> ExternalContexts; // 0xe8
    FName FXSignalKillOwner; // 0xf8
    bool bOwnerKilled; // 0x100
    char pad_101[0x7];
    static USkinFXComponent* StaticClass();
    bool SkinFXUpdateRules(FName FX, FMaterialSwapRules newRules);
    bool SkinFXStartWithRulesAndEnvelope(UClass* FX, FMaterialSwapRules swapRules, FSkinFXASREnvelope UseEnvelope);
    bool SkinFXStartWithRules(UClass* FX, FMaterialSwapRules swapRules);
    bool SkinFXStartWithEnvelope(UClass* FX, FSkinFXASREnvelope UseEnvelope);
    bool SkinFXStart(UClass* FX);
    void SkinFXSetTimeFactor(UClass* FX, float TimeFactor, bool& Success);
    void SkinFXSetExternalVectorParameter(UClass* FX, FName ParameterName, FVector Value, float packAlpha);
    void SkinFXSetExternalTextureParameter(UClass* FX, FName ParameterName, UTexture* Value);
    void SkinFXSetExternalScalarParameter(UClass* FX, FName ParameterName, float Value);
    void SkinFXSetExternalParameters(UClass* FX, FMaterialSwapParameters& parameterValues);
    void SkinFXSetExternalColorParameter(UClass* FX, FName ParameterName, FLinearColor Value);
    bool SkinFXIsRunning(UClass* FX);
    void SkinFXGetTimeFactor(UClass* FX, float& TimeFactor);
    void SkinFXGetEffectBlueprintGraph(UClass* FX, ASkinFXDefinitionGraph*& EffectDefinitionGraph);
    void SkinFXGetCurrentScalarParameter(UClass* FX, FName ParameterName, float& ParameterValue, bool& bParameterFound);
    void SkinFXGetCurrentParameters(UClass* FX, FMaterialSwapParameters& CurrentParameters);
    void SkinFXGetCurrentColorParameter(UClass* FX, FName ParameterName, FLinearColor& ParameterValue, bool& bParameterFound);
    bool SkinFXEndAll(ESkinFXEffectEndStyle EndStyle);
    bool SkinFXEnd(UClass* FX, ESkinFXEffectEndStyle EndStyle);
    void SkinFXClearExternalParameters(UClass* FX);
    bool SkinFXAnyRunning();
}; // Size: 0x108
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ASkinFXDefinition.hpp"
#include "ESkinFXDelegateEvent.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class UTexture;
class USkinFXComponent;
struct FMaterialSwapParameters;
class AActor;
#pragma pack(push, 1)
class ASkinFXDefinitionGraph : public ASkinFXDefinition {
public:
    bool bWantPerTickUpdateEvent; // 0x5c0
    bool bSignalFinished; // 0x5c1
    char pad_5c2[0x6];
    static ASkinFXDefinitionGraph* StaticClass();
    void WantPerTickUpdateEvent(bool tickMe);
    void SkinFXUpdateTick(float DeltaTime);
    void SkinFXSignalFinished();
    void SkinFXSetVectorParameter(FName ParameterName, FVector Value, float packAlpha);
    void SkinFXSetTextureParameter(FName ParameterName, UTexture* Value);
    void SkinFXSetScalarParameter(FName ParameterName, float Value);
    void SkinFXSetParameters(FMaterialSwapParameters& parameterValues);
    void SkinFXSetColorParameter(FName ParameterName, FLinearColor Value);
    void SkinFXNotifyStart();
    void SkinFXNotifyRetrigger(float CurrentTime);
    void SkinFXNotifyKill();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void SkinFXInitialUpdate();
    void SkinFXGetSkinFXComponent(USkinFXComponent*& RunningSkinFXComponent);
    void SkinFXGetMyEffectName(FName& MyEffectName);
    float SkinFXGetEnvelopeValueLinear();
    float SkinFXGetEnvelopeValueCurve();
    void SkinFXGetCurrentScalarParameter(FName ParameterName, float& ParameterValue, bool& bParameterFound);
    void SkinFXGetCurrentParameters(FMaterialSwapParameters& CurrentParameters);
    void SkinFXGetCurrentColorParameter(FName ParameterName, FLinearColor& ParameterValue, bool& bParameterFound);
    void SkinFXGetAffectedActor(AActor*& AffectedActor);
    void SkinFXEventNotify(USkinFXComponent* RunningSkinFXComponent, ESkinFXDelegateEvent Event);
    bool SkinFXApplyParameters();
}; // Size: 0x5c8
#pragma pack(pop)

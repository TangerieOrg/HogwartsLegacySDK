#pragma once
#include <cstdint>
#include "EAttachmentRule.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class USceneComponent;
class AActor;
class UFXSystemAsset;
#pragma pack(push, 1)
class UFXSystemComponent : public UPrimitiveComponent {
public:
    static UFXSystemComponent* StaticClass();
    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetUseAutoManageAttachment(bool bAutoManage);
    void SetIntParameter(FName ParameterName, int32_t Param);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetEmitterEnable(FName EmitterName, bool bNewEnableState);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetBoolParameter(FName ParameterName, bool Param);
    void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
    void SetActorParameter(FName ParameterName, AActor* Param);
    void ReleaseToPool();
    UFXSystemAsset* GetFXSystemAsset();
}; // Size: 0x480
#pragma pack(pop)

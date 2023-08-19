#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class UParticleSystemComponent;
class UParticleSystem;
class UMaterialInterface;
#pragma pack(push, 1)
class AEmitter : public AActor {
public:
    UParticleSystemComponent* ParticleSystemComponent; // 0x248
    uint8_t bDestroyOnSystemFinish : 1; // 0x250
    uint8_t bPostUpdateTickGroup : 1; // 0x250
    uint8_t bCurrentlyActive : 1; // 0x250
    uint8_t pad_bitfield_250_3 : 5;
    char pad_251[0x47];
    static AEmitter* StaticClass();
    void ToggleActive();
    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetTemplate(UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetActorParameter(FName ParameterName, AActor* Param);
    void OnRep_bCurrentlyActive();
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    bool IsActive();
    void Deactivate();
    void Activate();
}; // Size: 0x298
#pragma pack(pop)

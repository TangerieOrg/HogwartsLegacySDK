#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETraceTypeQuery.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UNiagaraComponent;
class UMaterialInstanceDynamic;
class UPostProcessComponent;
class AFlyingBroom;
#pragma pack(push, 1)
class ABroomFlightVFXActor : public AActor {
public:
    ETraceTypeQuery MapTraceType; // 0x248
    char pad_249[0x3];
    float Time; // 0x24c
    float PitchMultiply; // 0x250
    float YawMultiply; // 0x254
    float YawStrength; // 0x258
    FVector TargetLocation; // 0x25c
    TArray<FString> SpeedKeys; // 0x268
    TArray<FVector2D> SpeedValues; // 0x278
    TArray<FString> TimeKeys; // 0x288
    TArray<FVector2D> TimeValues; // 0x298
    UNiagaraComponent* SpawnedSystem; // 0x2a8
    UMaterialInstanceDynamic* DynamicBroomMaterial; // 0x2b0
    char pad_2b8[0xa8];
    UPostProcessComponent* BroomPostProcess; // 0x360
    UNiagaraComponent* BroomNiagara; // 0x368
    static ABroomFlightVFXActor* StaticClass();
    UNiagaraComponent* SpawnNiagaraSystem();
    void SetupVFXRefs();
    void SetupGroundVFX();
    void SetupBroomTrailVFX();
    void SetupBoostGainVFX();
    void SetRadialBlurToggleParameterValue(float ToggleAmount);
    void SetRadialBlurParameterValues(float EffectAmount, FLinearColor TargetPos);
    UPostProcessComponent* GetPostProcess();
    UNiagaraComponent* GetNiagara();
    AFlyingBroom* GetBroomCapsule();
    void DestroyNiagaraAndPostProcessComponent();
    void CreateBroomMaterialDynamic();
}; // Size: 0x370
#pragma pack(pop)

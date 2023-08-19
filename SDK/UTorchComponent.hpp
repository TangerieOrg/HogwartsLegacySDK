#pragma once
#include <cstdint>
#include "EObjectTypeQuery.hpp"
#include "FLinearColor.hpp"
#include "UActorComponent.hpp"
class UPointLightComponent;
class USphereComponent;
class UAnimatedLightComponent;
class UNiagaraComponent;
class UMaterialBillboardComponent;
class UAkComponent;
class AActor;
class UObjectStateInfo;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UTorchComponent : public UActorComponent {
public:
    bool bStartLit; // 0xc8
    bool bPropagate; // 0xc9
    bool bCastShadow; // 0xca
    char pad_cb[0x1];
    FLinearColor LightColor; // 0xcc
    float LightIntensity; // 0xdc
    bool bCustomLightRadius; // 0xe0
    char pad_e1[0x3];
    float CustomLightRadius; // 0xe4
    bool bReceiveSequentialLighting; // 0xe8
    bool bSendSequentialLighting; // 0xe9
    char pad_ea[0x2];
    float SequentialLightSpreadRadius; // 0xec
    bool bOverrideLightDelay; // 0xf0
    char pad_f1[0x3];
    float OverrideLightDelay; // 0xf4
    bool bIsLit; // 0xf8
    bool bLightTick; // 0xf9
    char pad_fa[0x2];
    float CurrentLightIntensity; // 0xfc
    float LightDelay; // 0x100
    char pad_104[0x4];
    USphereComponent* PropagateSphere; // 0x108
    TArray<UNiagaraComponent*> FireParticles; // 0x110
    TArray<UMaterialBillboardComponent*> FireBillboards; // 0x120
    UAkComponent* Ak_Fire_Burning_Loop; // 0x130
    UPointLightComponent* FirePointLight; // 0x138
    UAnimatedLightComponent* AnimatedLight; // 0x140
    TArray<EObjectTypeQuery> ObjectTypes; // 0x148
    TArray<AActor*> PropagateObjects; // 0x158
    UObjectStateInfo* TorchObjectState; // 0x168
    char pad_170[0x8];
    static UTorchComponent* StaticClass();
    void StartLight();
    void SetOnFire(bool bOnFire);
    void SequentialLight();
    void Propagate();
    void OnProxOverlapBegin(AActor* OtherActor);
    void OnPropagateOverlapEnd(AActor* OtherActor);
    void OnPropagateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);
    void MidLight();
    void ExtinguishLight();
    void EndLight();
}; // Size: 0x178
#pragma pack(pop)

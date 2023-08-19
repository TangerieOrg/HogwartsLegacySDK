#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FTransform.hpp"
class UClass;
class UMaterialInterface;
class USceneComponent;
class UControlRig;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class AControlRigControlActor : public AActor {
public:
    AActor* ActorToTrack; // 0x248
    UClass* ControlRigClass; // 0x250
    bool bRefreshOnTick; // 0x258
    bool bIsSelectable; // 0x259
    char pad_25a[0x6];
    UMaterialInterface* MaterialOverride; // 0x260
    FString ColorParameter; // 0x268
    bool bCastShadows; // 0x278
    char pad_279[0x7];
    USceneComponent* ActorRootComponent; // 0x280
    UControlRig* ControlRig; // 0x288
    TArray<FName> ControlNames; // 0x290
    TArray<FTransform> GizmoTransforms; // 0x2a0
    TArray<UStaticMeshComponent*> Components; // 0x2b0
    TArray<UMaterialInstanceDynamic*> Materials; // 0x2c0
    FName ColorParameterName; // 0x2d0
    char pad_2d8[0x8];
    static AControlRigControlActor* StaticClass();
    void Refresh();
    void Clear();
}; // Size: 0x2e0
#pragma pack(pop)

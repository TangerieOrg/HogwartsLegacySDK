#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAkComponent;
class UStaticMeshComponent;
class UChildActorComponent;
class USceneComponent;
class UNiagaraComponent;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_FlyingBroom_Platform_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_BP_FlyingBroom_Platform; // 0x250
    UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_4; // 0x258
    UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_3; // 0x260
    UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_2; // 0x268
    UAkComponent* Ak_BP_FlyingBroom_Platform_Brazier_1; // 0x270
    UChildActorComponent* BP_OL_BroomActivity_Marker_M; // 0x278
    UStaticMeshComponent* FlyPlatformLegGrab; // 0x280
    UStaticMeshComponent* Bottom; // 0x288
    UStaticMeshComponent* Brazier4; // 0x290
    UStaticMeshComponent* Brazier3; // 0x298
    UStaticMeshComponent* Brazier2; // 0x2a0
    UStaticMeshComponent* Brazier1; // 0x2a8
    UStaticMeshComponent* OuterRing; // 0x2b0
    UStaticMeshComponent* InnerRing; // 0x2b8
    USceneComponent* SharedRoot; // 0x2c0
    UStaticMeshComponent* Cylinder; // 0x2c8
    float StartingRotation; // 0x2d0
    bool IsRotating; // 0x2d4
    char pad_2d5[0x3];
    float RotationSpeed; // 0x2d8
    float CurrentRotation; // 0x2dc
    float TargetRotation; // 0x2e0
    float DeltaRotation; // 0x2e4
    FString BroomPlatformComplete; // 0x2e8
    bool PlatformActive; // 0x2f8
    char pad_2f9[0x7];
    FString UniqueObjectName; // 0x300
    static ABP_FlyingBroom_Platform_C* StaticClass();
    void NewFunction_0(UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_FlyingBroom_Platform(int32_t EntryPoint);
}; // Size: 0x310
#pragma pack(pop)

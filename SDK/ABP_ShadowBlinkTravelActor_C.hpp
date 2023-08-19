#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USphereComponent;
class USceneComponent;
class UPrimitiveComponent;
class APawn;
#pragma pack(push, 1)
class ABP_ShadowBlinkTravelActor_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USphereComponent* Sphere; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    bool IsTriggered; // 0x260
    char pad_261[0x7];
    static ABP_ShadowBlinkTravelActor_C* StaticClass();
    void ReceiveBeginPlay0();
    void BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_ShadowBlinkTravelActor(int32_t EntryPoint, USceneComponent* CallFunc_GetAttachParent_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_NotEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue);
}; // Size: 0x268
#pragma pack(pop)

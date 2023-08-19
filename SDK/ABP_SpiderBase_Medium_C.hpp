#pragma once
#include <cstdint>
#include "ABP_SpiderBase_C.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCapsuleComponent;
class UBP_NPC_MovementCapsuleComponent_C;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class ABP_SpiderBase_Medium_C : public ABP_SpiderBase_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2570
    UCapsuleComponent* MeleeCapsuleFront; // 0x2578
    UCapsuleComponent* MeleeCapsuleMain; // 0x2580
    UBP_NPC_MovementCapsuleComponent_C* BP_NPC_MovementCapsuleComponent; // 0x2588
    static ABP_SpiderBase_Medium_C* StaticClass();
    void UserConstructionScript0(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
    void ReceiveBeginPlay();
    void AttackCollisionStart();
    void AttackCollisionStop();
    void BndEvt__MeleeCapsuleFront_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__MeleeCapsuleMain_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SpiderBase_Medium(int32_t EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, FHitResult K2Node_ComponentBoundEvent_SweepResult_1);
}; // Size: 0x2590
#pragma pack(pop)

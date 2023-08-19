#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
class USplineComponent;
class UBoxComponent;
class UAkComponent;
class ABiped_Player;
class UAkAudioEvent;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Audio_OceanEdge_Spline_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USplineComponent* Spline; // 0x250
    UBoxComponent* ActivateAudioBox; // 0x258
    UAkComponent* AkCom_OceanEdge_Spline; // 0x260
    float YDiff; // 0x268
    FVector AudioLoc; // 0x26c
    FVector PlayerLoc; // 0x278
    char pad_284[0x4];
    UAkAudioEvent* LoopAudioEvent; // 0x288
    ABiped_Player* Player; // 0x290
    FTimerHandle TickTimerHandle; // 0x298
    float TickTimerTime; // 0x2a0
    char pad_2a4[0x4];
    static ABP_Audio_OceanEdge_Spline_C* StaticClass();
    void TickThrottler_WakeUp(float DistanceSquaredToCamera);
    void ReceiveBeginPlay0();
    void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera);
    void BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void TickThrottler_GoToSleep(float DistanceSquaredToCamera);
    void BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void TickTimerEvent();
    void ExecuteUbergraph_BP_Audio_OceanEdge_Spline(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}; // Size: 0x2a8
#pragma pack(pop)

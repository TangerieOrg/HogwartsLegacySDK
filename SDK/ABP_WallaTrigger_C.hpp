#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FEventDateTime.hpp"
#include "FMissionName.hpp"
#include "FPointerToUberGraphFrame.hpp"
struct FTimeEvent;
class UAkComponent;
class ACharacter;
class UBoxComponent;
struct FHitResult;
class UAkAudioEvent;
class USceneComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_WallaTrigger_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak; // 0x250
    UBoxComponent* WallaTrigger; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    FMissionName MissionName; // 0x268
    TArray<FString> MissionSteps; // 0x270
    UAkAudioEvent* WallaLoop; // 0x280
    UAkAudioEvent* WallaLoopStop; // 0x288
    FString StartTimeString; // 0x290
    FString EndTimeString; // 0x2a0
    bool TimeRegistered; // 0x2b0
    bool WallaPlaying; // 0x2b1
    char pad_2b2[0x6];
    TArray<FName> MissionNames; // 0x2b8
    FEventDateTime StartTime; // 0x2c8
    FEventDateTime EndTime; // 0x308
    static ABP_WallaTrigger_C* StaticClass();
    void Player_in_Trig(bool& IsInside, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue);
    void ReceiveBeginPlay0();
    void BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void StartWalla(bool TRUE);
    void RegisterTimeEvents(bool Register);
    void CustomEvent_0(FTimeEvent& InTimeEvent);
    void CustomEvent_1(FTimeEvent& InTimeEvent);
    void ExecuteUbergraph_BP_WallaTrigger(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x348
#pragma pack(pop)

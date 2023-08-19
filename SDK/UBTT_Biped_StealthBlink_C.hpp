#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UParticleSystemComponent;
class ABiped_Player;
class ACharacter;
class AActor;
class UAnimInstance;
class AWandTool;
#pragma pack(push, 1)
class UBTT_Biped_StealthBlink_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float invulnerableTime; // 0x158
    bool IKRestoreState; // 0x15c
    char pad_15d[0x3];
    UParticleSystemComponent* ShadowParticleEmitter; // 0x160
    AActor* Victim; // 0x168
    static UBTT_Biped_StealthBlink_C* StaticClass();
    void DestroyShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void CreateShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void StealthBlinkTimerExpired();
    void ExecuteUbergraph_BTT_Biped_StealthBlink(int32_t EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AWandTool* Temp_object_Variable);
}; // Size: 0x170
#pragma pack(pop)

#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_StealthBlink_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UParticleSystemComponent.hpp"
void UBTT_Biped_StealthBlink_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_Biped_StealthBlink_C* UBTT_Biped_StealthBlink_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C");
    return (UBTT_Biped_StealthBlink_C*)res;
}
void UBTT_Biped_StealthBlink_C::DestroyShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.DestroyShadowBlinkFX"));
    struct Params_DestroyShadowBlinkFX {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x14
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_DestroyShadowBlinkFX params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_StealthBlink_C::StealthBlinkTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.StealthBlinkTimerExpired"));
    struct Params_StealthBlinkTimerExpired {
    }; // Size: 0x0
    Params_StealthBlinkTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_StealthBlink_C::CreateShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.CreateShadowBlinkFX"));
    struct Params_CreateShadowBlinkFX {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x14
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateShadowBlinkFX params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_StealthBlink_C::FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_StealthBlink_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_StealthBlink.BTT_Biped_StealthBlink_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_StealthBlink_C::ExecuteUbergraph_BTT_Biped_StealthBlink(int32_t EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AWandTool* Temp_object_Variable) {}

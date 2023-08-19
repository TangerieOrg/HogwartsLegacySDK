#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAmbulatory_MovementComponent;
class ABP_ShadowBlinkTravelActor_C;
class AActor;
class UPawnMovementComponent;
class UNiagaraComponent;
class UCogGroupFocusDirection_ActorFacing;
class UCogGroupUpDirection_World;
class ABiped_Player;
class APawn;
class ACharacter;
class UObject;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_ShadowBlink_2_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool IKRestoreState; // 0x158
    char pad_159[0x3];
    FVector LastDirection; // 0x15c
    bool AllowStickMovement; // 0x168
    char pad_169[0x7];
    ABP_ShadowBlinkTravelActor_C* TravelActor; // 0x170
    AActor* AutoTarget; // 0x178
    bool AltModeOn; // 0x180
    char pad_181[0x7];
    UCogGroupFocusDirection_ActorFacing* CogFocus_ActorFacing; // 0x188
    UCogGroupUpDirection_World* CogUp_World; // 0x190
    bool IsEnemy; // 0x198
    bool IsGate; // 0x199
    char pad_19a[0x2];
    float BlinkDistance; // 0x19c
    bool AllowStick; // 0x1a0
    char pad_1a1[0x7];
    FHermesBPDelegateHandle SphereMadeContactHandle; // 0x1a8
    UNiagaraComponent* ShadowParticleEmitterNA; // 0x1b8
    bool OnButtslide; // 0x1c0
    bool LastButtslide; // 0x1c1
    bool ExitShadowBlink; // 0x1c2
    char pad_1c3[0x5];
    static UBTT_Biped_ShadowBlink_2_C* StaticClass();
    void ShadowBlinkExit(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void ClampButtslideVelocity(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Vector_ClampSizeMax_ReturnValue);
    void TestForButtSlide(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess, EPhysicalSurface CallFunc_GetCurrentSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void AcquireTarget(APawn* BipedPlayer);
    void BlinkEndBeforeEnemy(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void Destroy_Shadow_Blink_FX(bool OnExit, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void CreateShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
    void FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ShadowBlinkSphereHitSomething(UObject* Caller, AActor* Actor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void PlayerNearDoor(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_ShadowBlink_2(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1);
}; // Size: 0x1c8
#pragma pack(pop)

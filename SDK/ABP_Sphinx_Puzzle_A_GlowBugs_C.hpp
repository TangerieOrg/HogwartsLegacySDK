#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
class ULocalStencilBoundsHintComponent;
class UCognitionStimuliSourceComponent;
class ABiped_Player;
class UAkComponent;
class UNiagaraComponent;
class USphereComponent;
class ABP_GlowBugSwarm_C;
class UTargetTypeBase;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_A_GlowBugs_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x250
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x258
    UNiagaraComponent* Niagara; // 0x260
    USphereComponent* Sphere; // 0x268
    UAkComponent* Ak_BP_SphinxPuzzle_A_GlowBugs; // 0x270
    FVector StartLoc; // 0x278
    FVector Target; // 0x284
    bool bIsActive; // 0x290
    bool bComplete; // 0x291
    bool bAttached; // 0x292
    char pad_293[0x5];
    AActor* LumosBP; // 0x298
    ABP_GlowBugSwarm_C* GlowBugSwarm; // 0x2a0
    float RetreatDelay; // 0x2a8
    float RetreatSpeed; // 0x2ac
    char pad_2b0[0x20];
    UAkComponent* Ak_Butterfly_Hold_Motion; // 0x2d0
    bool playerLookingAt; // 0x2d8
    char pad_2d9[0x7];
    static ABP_Sphinx_Puzzle_A_GlowBugs_C* StaticClass();
    bool DisableLightRaytrace();
    bool DisableLightInteraction();
    void PlayerLookAt(bool Flag, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_Actor_ReturnValue);
    void Build();
    void UserConstructionScript0();
    void OnEnteredLightProximity(AActor* LumosBP);
    void OnEnteredNearby(AActor* LumosBP);
    void OnExitedLightProximity(AActor* LumosBP);
    void OnExitedNearby();
    void ReceiveBeginPlay0();
    void Retreat();
    void OnEnteredLight(AActor* LumosBP, bool bPlayerOwned);
    void OnExitedLight(AActor* LumosBP, bool bPlayerOwned);
    void Move();
    void Success(FVector RestLoc);
    void EndMove();
    void Reveal();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_A_GlowBugs(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, uint8_t CallFunc_MakeLiteralByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, uint8_t CallFunc_MakeLiteralByte_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_2, uint8_t CallFunc_MakeLiteralByte_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, AActor* K2Node_Event_LumosBP_4, AActor* K2Node_Event_LumosBP_3, AActor* K2Node_Event_LumosBP_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue_4, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, AActor* K2Node_Event_LumosBP_1, bool K2Node_Event_bPlayerOwned_1, AActor* K2Node_Event_LumosBP, bool K2Node_Event_bPlayerOwned, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FVector K2Node_CustomEvent_RestLoc, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_3, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Log_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Dropped__DelegateSignature();
    void Grabbed__DelegateSignature();
}; // Size: 0x2e0
#pragma pack(pop)

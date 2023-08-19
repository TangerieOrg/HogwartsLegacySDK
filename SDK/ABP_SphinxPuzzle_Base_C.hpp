#pragma once
#include <cstdint>
#include "ASphinxPuzzle.hpp"
#include "EInteractiveState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FMasterMaterialAssetSet.hpp"
#include "FMasterMaterialSet.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USphereComponent;
class ABP_SphinxPuzzle_Marker_C;
class UChildActorComponent;
class UAkAudioEvent;
class USceneComponent;
class UMaterialPermuterLoadingBundle;
class USceneRig_Interaction;
class AActor;
class ABP_Merlin_Gazebo_C;
class UAchievementManager;
class UKnowledgeManager;
class ABiped_Player;
class ABeaconLocation;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_SphinxPuzzle_Base_C : public ASphinxPuzzle {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    USphereComponent* PlayerSphere; // 0x2f0
    UChildActorComponent* BP_SphinxPuzzle_Marker; // 0x2f8
    UChildActorComponent* BP_Merlin_Gazebo; // 0x300
    USceneComponent* DefaultSceneRoot; // 0x308
    EInteractiveState State; // 0x310
    char pad_311[0xf];
    FTransform StatueTransform; // 0x320
    ABP_Merlin_Gazebo_C* Gazebo; // 0x350
    FVector GazeboSceneRigOffset_Location; // 0x358
    FRotator GazeboSceneRigOffset_Rotation; // 0x364
    UAkAudioEvent* PiecesCompletedAudioEvent; // 0x370
    bool SkinFXIsLoaded; // 0x378
    char pad_379[0x7];
    UAkAudioEvent* PiecesCompletedMotionEvent; // 0x380
    bool AlreadyOpen; // 0x388
    char pad_389[0x7];
    USceneRig_Interaction* GazeboSR; // 0x390
    bool bHasAlreadyPlayedNoSpellLine; // 0x398
    char pad_399[0x7];
    TArray<FName> SpellRequiredForPuzzle; // 0x3a0
    bool bHasAValidSpell; // 0x3b0
    char pad_3b1[0xf];
    static ABP_SphinxPuzzle_Base_C* StaticClass();
    void PrecacheSkinFX(UMaterialPermuterLoadingBundle*& BundleLoader, FMaterialPermuterKey CallFunc_MakeKey_Key, FMasterMaterialSet CallFunc_MakeActorMasterMaterialSet_ReturnValue, TArray<void*>& CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets, FMasterMaterialAssetSet CallFunc_CreateMasterMaterialAssetSet_ReturnValue, UMaterialPermuterLoadingBundle* CallFunc_CreateKeyMaterialSetBundle_ReturnValue);
    void FinishPuzzle();
    void LocksAndKnowledgeActions(UAchievementManager* CallFunc_Get_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UKnowledgeManager* CallFunc_Get_ReturnValue_1, FName CallFunc_GetRegionKnowledgeCardFromLocation_ReturnValue);
    void PiecesCompleted(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OpenGazebo(float Delay, bool Solved, float CallFunc_Add_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void CompleteBeacon(ABP_SphinxPuzzle_Marker_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue);
    void Build(FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo, bool K2Node_DynamicCast_bSuccess);
    void MissionUnlock();
    void ReceiveBeginPlay();
    void EnableCollectionCollision();
    void BundleLoaded(UMaterialPermuterLoadingBundle* Bundle);
    void NotifyCurrentState(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle(EInteractiveState State);
    void BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SphinxPuzzle_Base(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UMaterialPermuterLoadingBundle* CallFunc_PrecacheSkinFX_BundleLoader, UMaterialPermuterLoadingBundle* K2Node_CustomEvent_Bundle, EInteractiveState K2Node_Event_CurrentObjectState, bool CallFunc_IsValid_ReturnValue, EInteractiveState K2Node_Event_state, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
}; // Size: 0x3c0
#pragma pack(pop)

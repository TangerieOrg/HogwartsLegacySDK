#include "AActor.hpp"
#include "ABP_Merlin_Gazebo_C.hpp"
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_SphinxPuzzle_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "ABiped_Player.hpp"
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
#include "UAchievementManager.hpp"
#include "UAkAudioEvent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UKnowledgeManager.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRig_Interaction.hpp"
#include "USphereComponent.hpp"
void ABP_SphinxPuzzle_Base_C::Build(FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.Build"));
    struct Params_Build {
        FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult; // 0x0
        ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo; // 0x88
        bool K2Node_DynamicCast_bSuccess; // 0x90
    }; // Size: 0x91
    Params_Build params{};
    params.CallFunc_K2_SetRelativeTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeTransform_SweepHitResult;
    params.K2Node_DynamicCast_AsBP_Merlin_Gazebo = (ABP_Merlin_Gazebo_C*)K2Node_DynamicCast_AsBP_Merlin_Gazebo;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
ABP_SphinxPuzzle_Base_C* ABP_SphinxPuzzle_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C");
    return (ABP_SphinxPuzzle_Base_C*)res;
}
void ABP_SphinxPuzzle_Base_C::PrecacheSkinFX(UMaterialPermuterLoadingBundle*& BundleLoader, FMaterialPermuterKey CallFunc_MakeKey_Key, FMasterMaterialSet CallFunc_MakeActorMasterMaterialSet_ReturnValue, TArray<void*>& CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets, FMasterMaterialAssetSet CallFunc_CreateMasterMaterialAssetSet_ReturnValue, UMaterialPermuterLoadingBundle* CallFunc_CreateKeyMaterialSetBundle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.PrecacheSkinFX"));
    struct Params_PrecacheSkinFX {
        UMaterialPermuterLoadingBundle* BundleLoader; // 0x0
        FMaterialPermuterKey CallFunc_MakeKey_Key; // 0x8
        FMasterMaterialSet CallFunc_MakeActorMasterMaterialSet_ReturnValue; // 0x18
        TArray<void*> CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets; // 0x128
        FMasterMaterialAssetSet CallFunc_CreateMasterMaterialAssetSet_ReturnValue; // 0x138
        UMaterialPermuterLoadingBundle* CallFunc_CreateKeyMaterialSetBundle_ReturnValue; // 0x648
    }; // Size: 0x650
    Params_PrecacheSkinFX params{};
    params.BundleLoader = (UMaterialPermuterLoadingBundle*)BundleLoader;
    params.CallFunc_MakeKey_Key = (FMaterialPermuterKey)CallFunc_MakeKey_Key;
    params.CallFunc_MakeActorMasterMaterialSet_ReturnValue = (FMasterMaterialSet)CallFunc_MakeActorMasterMaterialSet_ReturnValue;
    params.CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets = (TArray<void*>)CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets;
    params.CallFunc_CreateMasterMaterialAssetSet_ReturnValue = (FMasterMaterialAssetSet)CallFunc_CreateMasterMaterialAssetSet_ReturnValue;
    params.CallFunc_CreateKeyMaterialSetBundle_ReturnValue = (UMaterialPermuterLoadingBundle*)CallFunc_CreateKeyMaterialSetBundle_ReturnValue;
    ProcessEvent(func, &params);
    BundleLoader = params.BundleLoader;
    CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets = params.CallFunc_MasterMaterialSetToAssets_MasterMaterialAssets;
}
void ABP_SphinxPuzzle_Base_C::OpenGazebo(float Delay, bool Solved, float CallFunc_Add_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {}
void ABP_SphinxPuzzle_Base_C::FinishPuzzle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.FinishPuzzle"));
    struct Params_FinishPuzzle {
    }; // Size: 0x0
    Params_FinishPuzzle params{};
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::LocksAndKnowledgeActions(UAchievementManager* CallFunc_Get_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UKnowledgeManager* CallFunc_Get_ReturnValue_1, FName CallFunc_GetRegionKnowledgeCardFromLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.LocksAndKnowledgeActions"));
    struct Params_LocksAndKnowledgeActions {
        UAchievementManager* CallFunc_Get_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        char pad_14[0x4];
        UKnowledgeManager* CallFunc_Get_ReturnValue_1; // 0x18
        FName CallFunc_GetRegionKnowledgeCardFromLocation_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_LocksAndKnowledgeActions params{};
    params.CallFunc_Get_ReturnValue = (UAchievementManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UKnowledgeManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_GetRegionKnowledgeCardFromLocation_ReturnValue = (FName)CallFunc_GetRegionKnowledgeCardFromLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::PiecesCompleted(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_SphinxPuzzle_Base_C::CompleteBeacon(ABP_SphinxPuzzle_Marker_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.CompleteBeacon"));
    struct Params_CompleteBeacon {
        ABP_SphinxPuzzle_Marker_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_Marker; // 0x0
        bool K2Node_DynamicCast_bSuccess; // 0x8
        char pad_9[0x7];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x10
        bool K2Node_DynamicCast_bSuccess_1; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_GetBeaconHandle_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_CompleteBeacon params{};
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_Marker = (ABP_SphinxPuzzle_Marker_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBeaconHandle_ReturnValue = (int32_t)CallFunc_GetBeaconHandle_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::MissionUnlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.MissionUnlock"));
    struct Params_MissionUnlock {
    }; // Size: 0x0
    Params_MissionUnlock params{};
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::EnableCollectionCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.EnableCollectionCollision"));
    struct Params_EnableCollectionCollision {
    }; // Size: 0x0
    Params_EnableCollectionCollision params{};
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::BundleLoaded(UMaterialPermuterLoadingBundle* Bundle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.BundleLoaded"));
    struct Params_BundleLoaded {
        UMaterialPermuterLoadingBundle* Bundle; // 0x0
    }; // Size: 0x8
    Params_BundleLoaded params{};
    params.Bundle = (UMaterialPermuterLoadingBundle*)Bundle;
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::NotifyCurrentState(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::NotifyBeginPuzzle(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Base_C::BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Base.BP_SphinxPuzzle_Base_C.BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_SphinxPuzzle_Base_PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_SphinxPuzzle_Base_C::ExecuteUbergraph_BP_SphinxPuzzle_Base(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UMaterialPermuterLoadingBundle* CallFunc_PrecacheSkinFX_BundleLoader, UMaterialPermuterLoadingBundle* K2Node_CustomEvent_Bundle, EInteractiveState K2Node_Event_CurrentObjectState, bool CallFunc_IsValid_ReturnValue, EInteractiveState K2Node_Event_state, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {}

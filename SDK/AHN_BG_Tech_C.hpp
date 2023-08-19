#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "AmbientChatterTopicIDs.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ABP_Sphinx_Puzzle_B_Brazier_C;
class ASceneRigActor;
class ABP_Station_CustomGardenPlow_1p_C;
class AActor;
class AAIPath;
class UObject;
struct FLockManagerLock;
#pragma pack(push, 1)
class AHN_BG_Tech_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    int32_t Braziers_Lit_Count; // 0x258
    int32_t Brazier_Fail_Count; // 0x25c
    int32_t Mission_Attempt_Count; // 0x260
    char pad_264[0x4];
    TArray<AmbientChatterTopicIDs> Topics_Pool; // 0x268
    ABP_Sphinx_Puzzle_B_Brazier_C* BP_Sphinx_Puzzle_A_Brazier_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x278
    ASceneRigActor* CIV_MRT_01_04_IncendioWorks_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x280
    ABP_Station_CustomGardenPlow_1p_C* BP_Station_CustomGardenPlow_1p_2_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x288
    AAIPath* AIPath_0_ExecuteUbergraph_HN_BG_Tech_RefProperty; // 0x290
    static AHN_BG_Tech_C* StaticClass();
    void ReceiveBeginPlay();
    void Gazebo_Activated();
    void Brazier_Lit();
    void Brazier_Restart();
    void MRT_01_CP2a_Updated(UObject* Caller, FName& String);
    void IncendioHint_VO();
    void BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void NoraVO_Gazebo();
    void LockChanged(UObject* Caller, FLockManagerLock& Lock);
    void ExecuteUbergraph_HN_BG_Tech(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable);
}; // Size: 0x298
#pragma pack(pop)

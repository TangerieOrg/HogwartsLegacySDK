#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
class ABP_Sphinx_Puzzle_E_Rock_C;
class APlayerCameraManager;
class UObjectStateComponent;
class UPrimitiveComponent;
class UObjectStateInfo;
class APawn;
class UScheduler;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_E_Stack_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    UObjectStateComponent* ObjectState; // 0x258
    UPrimitiveComponent* FlockComp; // 0x260
    char pad_268[0x10];
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x278
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> OppugnoRocks; // 0x288
    bool bFlockingDisabled; // 0x298
    char pad_299[0x7];
    APlayerCameraManager* PlayerCamManager; // 0x2a0
    AActor* PlayerRef; // 0x2a8
    bool bBlocked; // 0x2b0
    char pad_2b1[0x7];
    TArray<float> CurTimes; // 0x2b8
    float TimeLastRockAffectedBySpell; // 0x2c8
    char pad_2cc[0x4];
    static ABP_Sphinx_Puzzle_E_Stack_C* StaticClass();
    void GetLastTimeRockAffectedBySpell(ABP_Sphinx_Puzzle_E_Rock_C* Rock, float& LastTimeAffected, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsBeingAffectedBySpells_ReturnValue, bool CallFunc_IsValid_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue);
    void DampRocks(bool bDamp, bool bOppugno, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetLinearDamping_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void AffectedBySpell(UPrimitiveComponent* HitComp);
    void EndSpell();
    void ReceiveBeginPlay0();
    void DisableFlocking();
    void ReceiveTick0(float DeltaSeconds);
    void ReplaceRock(ABP_Sphinx_Puzzle_E_Rock_C* OldRock, ABP_Sphinx_Puzzle_E_Rock_C* NewRock);
    void OppugnoEvent(UPrimitiveComponent* HitComp);
    void CheckRockStackReset();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Stack(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable);
    void Start__DelegateSignature();
}; // Size: 0x2d0
#pragma pack(pop)

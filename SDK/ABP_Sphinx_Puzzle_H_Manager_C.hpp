#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class ABP_Sphinx_Puzzle_H_StupefyTarget_C;
class ABP_Sphinx_Puzzle_H_Part_C;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_H_Manager_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* Scene; // 0x250
    ABP_Sphinx_Puzzle_H_StupefyTarget_C* Puzzle; // 0x258
    TArray<ABP_Sphinx_Puzzle_H_Part_C*> Stones; // 0x260
    UCapsuleComponent* PlayerCapsule; // 0x270
    int32_t NumStones; // 0x278
    int32_t DestroyedStones; // 0x27c
    static ABP_Sphinx_Puzzle_H_Manager_C* StaticClass();
    void ReceiveBeginPlay0();
    void StoneDestroyed();
    void StoneRepaired();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_H_Manager(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)

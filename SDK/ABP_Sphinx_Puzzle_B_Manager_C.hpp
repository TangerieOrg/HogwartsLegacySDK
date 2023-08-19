#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class ABP_Sphinx_Puzzle_B_Brazier_C;
class ABP_Sphinx_Puzzle_B_Part_C;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_B_Manager_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* Scene; // 0x250
    ABP_Sphinx_Puzzle_B_Brazier_C* Puzzle; // 0x258
    TArray<ABP_Sphinx_Puzzle_B_Part_C*> Columns; // 0x260
    char pad_270[0x20];
    static ABP_Sphinx_Puzzle_B_Manager_C* StaticClass();
    void ReceiveBeginPlay0();
    void Lit_Event();
    void Fail_Event();
    void Restart_Event();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Manager(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2);
    void Start__DelegateSignature();
    void Solved__DelegateSignature();
}; // Size: 0x290
#pragma pack(pop)

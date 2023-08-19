#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
class UAkAudioEvent;
class ABP_Sphinx_Puzzle_A_Lumos_C;
class ABP_Sphinx_Puzzle_A_Crystal_C;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_A_Manager_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* Scene; // 0x250
    ABP_Sphinx_Puzzle_A_Lumos_C* Puzzle; // 0x258
    TArray<ABP_Sphinx_Puzzle_A_Crystal_C*> Crystals; // 0x260
    UCapsuleComponent* PlayerCapsule; // 0x270
    int32_t NumCrystals; // 0x278
    int32_t SolvedCrystals; // 0x27c
    TArray<UAkAudioEvent*> SolvedSounds; // 0x280
    TArray<UAkAudioEvent*> SolvedSounds_Motion; // 0x290
    static ABP_Sphinx_Puzzle_A_Manager_C* StaticClass();
    void ReceiveBeginPlay0();
    void Activated_Event(FVector Location);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_A_Manager(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0x2a0
#pragma pack(pop)

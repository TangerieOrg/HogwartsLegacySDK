#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UBoxComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_D_Bowl_C : public AActor {
public:
    UStaticMeshComponent* SM_SphinxPuzzle_BowlPuzzle; // 0x248
    UBoxComponent* Box; // 0x250
    static ABP_Sphinx_Puzzle_D_Bowl_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)

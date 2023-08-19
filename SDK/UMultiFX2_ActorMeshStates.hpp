#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UMaterialSwapMeshState;
#pragma pack(push, 1)
class UMultiFX2_ActorMeshStates : public UMultiFX2_Filtered {
public:
    TArray<UMaterialSwapMeshState*> MeshStates; // 0x68
    FName MeshStatesTag; // 0x78
    bool bUpdateOnTick; // 0x80
    bool bDependOnInstigator; // 0x81
    char pad_82[0x6];
    static UMultiFX2_ActorMeshStates* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

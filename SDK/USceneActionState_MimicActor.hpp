#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class USceneActionState_MimicActor : public USceneRigObjectActionState {
public:
    USkeletalMeshComponent* MeshToModify; // 0x70
    USkeletalMeshComponent* MeshToMimic; // 0x78
    static USceneActionState_MimicActor* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

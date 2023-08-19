#pragma once
#include <cstdint>
class UActorMeshSetupMatch;
class UActorMeshSetupProcess;
#pragma pack(push, 1)
struct FActorMeshSetupDefinition {
    UActorMeshSetupMatch* Condition; // 0x0
    TArray<UActorMeshSetupProcess*> MeshSetups; // 0x8
}; // Size: 0x18
#pragma pack(pop)

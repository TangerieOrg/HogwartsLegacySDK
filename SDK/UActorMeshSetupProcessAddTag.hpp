#pragma once
#include <cstdint>
#include "UActorMeshSetupProcess.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessAddTag : public UActorMeshSetupProcess {
public:
    FName ActorTag; // 0x28
    static UActorMeshSetupProcessAddTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

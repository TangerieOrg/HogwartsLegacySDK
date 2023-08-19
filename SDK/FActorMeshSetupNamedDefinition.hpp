#pragma once
#include <cstdint>
#include "FActorMeshSetupDefinition.hpp"
#pragma pack(push, 1)
struct FActorMeshSetupNamedDefinition : public FActorMeshSetupDefinition {
    FName Name; // 0x18
}; // Size: 0x20
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchCustomizableCharacterID : public UActorMeshSetupMatch {
public:
    TArray<FName> IDs; // 0x28
    static UActorMeshSetupMatchCustomizableCharacterID* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

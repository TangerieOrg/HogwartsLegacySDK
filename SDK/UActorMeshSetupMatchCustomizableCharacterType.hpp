#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchCustomizableCharacterType : public UActorMeshSetupMatch {
public:
    TArray<FName> Types; // 0x28
    static UActorMeshSetupMatchCustomizableCharacterType* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchActorClass : public UActorMeshSetupMatch {
public:
    char pad_28[0x28];
    bool bIncludeSubclasses; // 0x50
    char pad_51[0x7];
    static UActorMeshSetupMatchActorClass* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

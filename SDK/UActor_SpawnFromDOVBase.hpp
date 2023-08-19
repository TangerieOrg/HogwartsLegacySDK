#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_SpawnFromDOVBase : public UActorProvider {
public:
    char pad_38[0x8];
    FName SpawnGroupName; // 0x40
    bool bKeepAliveAtEndOfScenerig; // 0x48
    char pad_49[0x7];
    static UActor_SpawnFromDOVBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

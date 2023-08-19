#pragma once
#include <cstdint>
#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_FromDOV : public UActorProvider {
public:
    char pad_38[0x8];
    FWorldActorReference DOVActorReference; // 0x40
    FName SpawnGroupName; // 0x60
    static UActor_FromDOV* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

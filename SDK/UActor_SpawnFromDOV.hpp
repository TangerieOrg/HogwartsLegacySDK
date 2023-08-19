#pragma once
#include <cstdint>
#include "FWorldActorReference.hpp"
#include "UActor_SpawnFromDOVBase.hpp"
#pragma pack(push, 1)
class UActor_SpawnFromDOV : public UActor_SpawnFromDOVBase {
public:
    FWorldActorReference DOVActorReference; // 0x50
    static UActor_SpawnFromDOV* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

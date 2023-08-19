#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterNotHasTag : public UActorMeshSetupMeshFilter {
public:
    FName ComponentTag; // 0x28
    static UActorMeshSetupMeshFilterNotHasTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

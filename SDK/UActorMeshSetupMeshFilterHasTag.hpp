#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterHasTag : public UActorMeshSetupMeshFilter {
public:
    FName ComponentTag; // 0x28
    static UActorMeshSetupMeshFilterHasTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

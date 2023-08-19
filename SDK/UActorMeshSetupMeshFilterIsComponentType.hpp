#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterIsComponentType : public UActorMeshSetupMeshFilter {
public:
    char pad_28[0x28];
    static UActorMeshSetupMeshFilterIsComponentType* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

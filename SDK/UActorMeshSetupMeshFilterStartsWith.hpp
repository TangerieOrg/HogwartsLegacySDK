#pragma once
#include <cstdint>
#include "ESearchCase\Type.hpp"
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterStartsWith : public UActorMeshSetupMeshFilter {
public:
    FString STARTSWITH; // 0x28
    ESearchCase::Type SearchCase; // 0x38
    char pad_39[0x7];
    static UActorMeshSetupMeshFilterStartsWith* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

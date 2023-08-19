#pragma once
#include <cstdint>
#include "ELocationBoneSocketSelectionMethod.hpp"
#include "ELocationBoneSocketSource.hpp"
#include "FLocationBoneSocketInfo.hpp"
#include "FVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase {
public:
    ELocationBoneSocketSource SourceType; // 0x30
    char pad_31[0x3];
    FVector UniversalOffset; // 0x34
    TArray<FLocationBoneSocketInfo> SourceLocations; // 0x40
    ELocationBoneSocketSelectionMethod SelectionMethod; // 0x50
    char pad_51[0x3];
    uint8_t bUpdatePositionEachFrame : 1; // 0x54
    uint8_t bOrientMeshEmitters : 1; // 0x54
    uint8_t bInheritBoneVelocity : 1; // 0x54
    uint8_t pad_bitfield_54_3 : 5;
    char pad_55[0x3];
    float InheritVelocityScale; // 0x58
    FName SkelMeshActorParamName; // 0x5c
    int32_t NumPreSelectedIndices; // 0x64
    char pad_68[0x8];
    static UParticleModuleLocationBoneSocket* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

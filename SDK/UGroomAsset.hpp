#pragma once
#include <cstdint>
#include "EGroomInterpolationType.hpp"
#include "EHairLODSelectionType.hpp"
#include "FHairGroupInfoWithVisibility.hpp"
#include "FHairGroupsCardsSourceDescription.hpp"
#include "FHairGroupsInterpolation.hpp"
#include "FHairGroupsLOD.hpp"
#include "FHairGroupsMaterial.hpp"
#include "FHairGroupsMeshesSourceDescription.hpp"
#include "FHairGroupsPhysics.hpp"
#include "FHairGroupsRendering.hpp"
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "UObject.hpp"
class UAssetUserData;
#pragma pack(push, 1)
class UGroomAsset : public UObject {
public:
    char pad_28[0x8];
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x30
    TArray<FHairGroupsRendering> HairGroupsRendering; // 0x40
    TArray<FHairGroupsPhysics> HairGroupsPhysics; // 0x50
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation; // 0x60
    TArray<FHairGroupsLOD> HairGroupsLOD; // 0x70
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x80
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x90
    TArray<FHairGroupsMaterial> HairGroupsMaterials; // 0xa0
    char pad_b0[0x10];
    bool EnableGlobalInterpolation; // 0xc0
    EGroomInterpolationType HairInterpolationType; // 0xc1
    EHairLODSelectionType LODSelectionType; // 0xc2
    char pad_c3[0x1];
    FPerPlatformInt MinLOD; // 0xc4
    FPerPlatformBool DisableBelowMinLodStripping; // 0xc8
    char pad_c9[0x7];
    TArray<float> EffectiveLODBias; // 0xd0
    TArray<UAssetUserData*> AssetUserData; // 0xe0
    char pad_f0[0x8];
    static UGroomAsset* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)

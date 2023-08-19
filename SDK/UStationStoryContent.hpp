#pragma once
#include <cstdint>
#include "FSceneRigStageCast.hpp"
#include "FStationStoryAnimationContent.hpp"
#include "UDataAsset.hpp"
class UStationStoryProp;
class USkeletalMesh;
class UStaticMesh;
#pragma pack(push, 1)
class UStationStoryContent : public UDataAsset {
public:
    FSceneRigStageCast StoryCast; // 0x30
    TArray<UStationStoryProp*> Props; // 0x40
    TArray<FStationStoryAnimationContent> Enters; // 0x50
    TArray<FStationStoryAnimationContent> TransitionsIn; // 0x60
    TArray<FStationStoryAnimationContent> Idles; // 0x70
    TArray<FStationStoryAnimationContent> TransitionsOut; // 0x80
    TArray<FStationStoryAnimationContent> Exits; // 0x90
    TArray<UStaticMesh*> StaticMeshProps; // 0xa0
    TArray<USkeletalMesh*> SkeletalMeshProps; // 0xb0
    static UStationStoryContent* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

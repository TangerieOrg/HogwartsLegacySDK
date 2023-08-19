#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneRigProvider;
class USceneRigStory;
class UBaseArchitectAsset;
#pragma pack(push, 1)
class UStoryTeller : public UObject {
public:
    char pad_28[0x8];
    USceneRigProvider* SceneRigProvider; // 0x30
    UBaseArchitectAsset* LookupAsset; // 0x38
    char pad_40[0x18];
    TArray<USceneRigStory*> Stories; // 0x58
    char pad_68[0x8];
    static UStoryTeller* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

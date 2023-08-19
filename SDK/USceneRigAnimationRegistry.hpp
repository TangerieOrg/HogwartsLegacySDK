#pragma once
#include <cstdint>
#include "FSceneRigAnimationRegsitryAnim.hpp"
#include "FSceneRigAnimationRegsitryInheritRegistry.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USceneRigAnimationRegistry : public UDataAsset {
public:
    TArray<FSceneRigAnimationRegsitryInheritRegistry> InheritFromRegistries; // 0x30
    TArray<FSceneRigAnimationRegsitryAnim> Animations; // 0x40
    static USceneRigAnimationRegistry* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

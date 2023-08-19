#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UStoryNode_Script.hpp"
class USceneRigProvider;
class UObject;
class USceneRig;
#pragma pack(push, 1)
class UStoryNode_SceneRig : public UStoryNode_Script {
public:
    USceneRigProvider* StorySR; // 0xc0
    ETimeRigInitializingBehavior InitializingBehavior; // 0xc8
    bool bSkippable; // 0xc9
    char pad_ca[0x6];
    static UStoryNode_SceneRig* StaticClass();
    USceneRig* GetSceneRigBP(UObject* Caller);
}; // Size: 0xd0
#pragma pack(pop)

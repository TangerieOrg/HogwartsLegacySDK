#pragma once
#include <cstdint>
#include "UAnimationClipProvider.hpp"
class USceneRigProxyActor;
#pragma pack(push, 1)
class UAnimationClip_FromSceneRigAction : public UAnimationClipProvider {
public:
    USceneRigProxyActor* Actor; // 0x28
    static UAnimationClip_FromSceneRigAction* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

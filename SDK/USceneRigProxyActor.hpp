#pragma once
#include <cstdint>
#include "ESceneRigProxyActor_PlatformHide.hpp"
#include "FSceneRigStageRole.hpp"
#include "UTimeRigElement.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneRigProxyActor : public UTimeRigElement {
public:
    FSceneRigStageRole Role; // 0x50
    UActorProvider* Actor; // 0x58
    bool bInterestPoint; // 0x60
    bool ShouldHoldDuringInitialization; // 0x61
    char pad_62[0x6];
    TArray<UTimeRigElement*> ChildElements; // 0x68
    ESceneRigProxyActor_PlatformHide HideOnPlatforms; // 0x78
    char pad_79[0x7];
    static USceneRigProxyActor* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

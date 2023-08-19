#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_CameraSetNamedTargetActor : public USceneRigActionBase {
public:
    FName TargetName; // 0x88
    UActorProvider* TargetActor; // 0x90
    bool bForceResetCamera; // 0x98
    char pad_99[0x7];
    static USceneAction_CameraSetNamedTargetActor* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

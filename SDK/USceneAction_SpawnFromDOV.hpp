#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_SpawnFromDOV : public USceneRigActionBase {
public:
    UActorProvider* DOVActor; // 0x88
    static USceneAction_SpawnFromDOV* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

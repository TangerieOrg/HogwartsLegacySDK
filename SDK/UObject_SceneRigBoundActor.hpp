#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_SceneRigBoundActor : public UActorProvider {
public:
    FName BoundObjectName; // 0x38
    static UObject_SceneRigBoundActor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

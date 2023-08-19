#pragma once
#include <cstdint>
#include "FSceneRigActorMemberReference.hpp"
#include "UActorProvider.hpp"
class UClass;
#pragma pack(push, 1)
class UActor_SceneRigActorMember : public UActorProvider {
public:
    UClass* ActorClass; // 0x38
    FSceneRigActorMemberReference Member; // 0x40
    static UActor_SceneRigActorMember* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

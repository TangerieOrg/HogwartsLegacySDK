#pragma once
#include <cstdint>
#include "FSceneRigStage_ActorReference.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCameraFixupActorAction : public UObject {
public:
    FSceneRigStage_ActorReference Actor; // 0x28
    bool Enabled; // 0x38
    char pad_39[0x7];
    static UCameraFixupActorAction* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

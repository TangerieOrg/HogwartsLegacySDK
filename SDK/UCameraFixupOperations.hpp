#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UClass;
class UCameraFixupOperation;
class UCameraFixupActorAction;
#pragma pack(push, 1)
class UCameraFixupOperations : public UDataAsset {
public:
    char pad_30[0x8];
    UClass* StageClass; // 0x38
    UClass* SceneRigClass; // 0x40
    TArray<UCameraFixupOperation*> Operations; // 0x48
    TArray<UCameraFixupActorAction*> ActorActions; // 0x58
    static UCameraFixupOperations* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

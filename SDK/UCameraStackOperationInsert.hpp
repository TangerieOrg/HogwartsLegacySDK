#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "ECameraStackOperationInsertLocation.hpp"
#include "UCameraStackOperationBase.hpp"
class UCameraStackBehavior;
class UClass;
#pragma pack(push, 1)
class UCameraStackOperationInsert : public UCameraStackOperationBase {
public:
    UCameraStackBehavior* Behavior; // 0x30
    float BlendInDuration; // 0x38
    float BlendOutDuration; // 0x3c
    ECameraStackOperationInsertLocation InsertLocation; // 0x40
    char pad_41[0x7];
    TArray<UClass*> BehaviorsToFind; // 0x48
    ECameraStackBehaviorSorting BehaviorSorting; // 0x58
    char pad_59[0x3];
    int32_t FilterFlags; // 0x5c
    bool bLazyBlendOut; // 0x60
    bool bReuseBehaviorOnReactivate; // 0x61
    char pad_62[0x6];
    static UCameraStackOperationInsert* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

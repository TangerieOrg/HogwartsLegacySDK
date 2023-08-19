#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UCameraStackOperationBase.hpp"
class UCameraStackBehavior;
class UClass;
#pragma pack(push, 1)
class UCameraStackOperationReplace : public UCameraStackOperationBase {
public:
    UCameraStackBehavior* Behavior; // 0x30
    float BlendInDuration; // 0x38
    float BlendOutDuration; // 0x3c
    TArray<UClass*> BehaviorsToFind; // 0x40
    ECameraStackBehaviorSorting BehaviorSorting; // 0x50
    char pad_51[0x3];
    int32_t FilterFlags; // 0x54
    bool bLazyBlendOut; // 0x58
    bool bReuseBehaviorOnReactivate; // 0x59
    char pad_5a[0x6];
    static UCameraStackOperationReplace* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

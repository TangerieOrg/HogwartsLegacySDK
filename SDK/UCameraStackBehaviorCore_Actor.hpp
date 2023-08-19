#pragma once
#include <cstdint>
#include "UCameraStackBehaviorCore.hpp"
class AActor;
#pragma pack(push, 1)
class UCameraStackBehaviorCore_Actor : public UCameraStackBehaviorCore {
public:
    char pad_50[0xd8];
    static UCameraStackBehaviorCore_Actor* StaticClass();
    void SetTransformActor(AActor* InTransformActor);
}; // Size: 0x128
#pragma pack(pop)

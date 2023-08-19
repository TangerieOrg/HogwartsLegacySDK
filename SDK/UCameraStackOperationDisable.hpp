#pragma once
#include <cstdint>
#include "UCameraStackOperationBase.hpp"
class UClass;
#pragma pack(push, 1)
class UCameraStackOperationDisable : public UCameraStackOperationBase {
public:
    float BlendOutDuration; // 0x30
    float BlendInDuration; // 0x34
    TArray<UClass*> BehaviorsToDisable; // 0x38
    int32_t FilterFlags; // 0x48
    char pad_4c[0x4];
    static UCameraStackOperationDisable* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ESceneRigCameraProxyActor_ValidCameraType.hpp"
#include "FGameplayTagContainer.hpp"
#include "USceneRigProxyActor.hpp"
class UNameProvider;
#pragma pack(push, 1)
class USceneRigCameraProxyActor : public USceneRigProxyActor {
public:
    UNameProvider* RegisteredCameraName; // 0x80
    bool RegisterCamera; // 0x88
    bool CheckObstructions; // 0x89
    bool CheckTransitions; // 0x8a
    char pad_8b[0x5];
    FGameplayTagContainer RegisteredTags; // 0x90
    ESceneRigCameraProxyActor_ValidCameraType ValidCameraType; // 0xb0
    char pad_b1[0x7];
    static USceneRigCameraProxyActor* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UNameProvider;
class UScreen;
class UObject;
#pragma pack(push, 1)
class UBP_SceneAction_SpellMiniGameAssignments_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool UseDefaultCamera; // 0xb0
    char pad_b1[0x7];
    UNameProvider* WhatSpell; // 0xb8
    static UBP_SceneAction_SpellMiniGameAssignments_C* StaticClass();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnMiniGameLoaded(UScreen* LoadedScreen);
    void SpellComplete(UObject* Caller, int32_t int);
    void ExecuteUbergraph_BP_SceneAction_SpellMiniGameAssignments(int32_t EntryPoint);
}; // Size: 0xc0
#pragma pack(pop)

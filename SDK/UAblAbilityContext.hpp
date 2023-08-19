#pragma once
#include <cstdint>
#include "EAnimBlendTickStyle.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAlphaBlend.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class UAblAbility;
class UAblAbilityComponent;
class UAblAbilityBaseScratchPad;
class AActor;
#pragma pack(push, 1)
class UAblAbilityContext : public UObject {
public:
    char pad_28[0x10];
    UAblAbility* m_Ability; // 0x38
    UAblAbilityComponent* m_AbilityComponent; // 0x40
    int32_t m_StackCount; // 0x48
    float m_CurrentTime; // 0x4c
    char pad_50[0x10];
    TArray<void*> m_TargetActors; // 0x60
    char pad_70[0x100];
    FTransform m_AsyncQueryTransform; // 0x170
    FAlphaBlend m_TransitionBlendIn; // 0x1a0
    FAlphaBlend m_TransitionBlendOut; // 0x1d0
    UAblAbilityBaseScratchPad* AbilityScratchPad; // 0x200
    EEvaluatorRootMotion::Mode m_UseSourceRootMotion; // 0x208
    EEvaluatorRootMotion::Mode m_UseDestRootMotion; // 0x209
    EAnimBlendTickStyle m_BlendTickStyle; // 0x20a
    char pad_20b[0x15];
    static UAblAbilityContext* StaticClass();
    void SetStackCount(int32_t Stack);
    TArray<AActor*> GetTargetActors();
    AActor* GetSelfActor();
    UAblAbilityComponent* GetSelfAbilityComponent();
    AActor* GetOwner();
    AActor* GetInstigator();
    float GetCurrentTimeRatio();
    float GetCurrentTime();
    int32_t GetCurrentStackCount();
}; // Size: 0x220
#pragma pack(pop)

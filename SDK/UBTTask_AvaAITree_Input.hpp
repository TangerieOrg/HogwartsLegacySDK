#pragma once
#include <cstdint>
#include "EManagedFacialAnimationPriority.hpp"
#include "FBTCustomAction.hpp"
#include "FFacialAnimation.hpp"
#include "FInputContextWithType.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "UBTTask_AvaAITree.hpp"
class UInputComponent;
#pragma pack(push, 1)
class UBTTask_AvaAITree_Input : public UBTTask_AvaAITree {
public:
    TArray<FName_GameLogicVarBool> GameLogicBoolVars; // 0xd0
    TArray<FBTCustomAction> CustomActions; // 0xe0
    FFacialAnimation FacialAnimation; // 0xf0
    EManagedFacialAnimationPriority FacialAnimationPriority; // 0x120
    char pad_121[0x2f];
    static UBTTask_AvaAITree_Input* StaticClass();
    void SetManagedContext(FInputContextWithType InContext, bool bFlag);
    void PlayerInputComponentCreated(UInputComponent* InputComponent);
    void PlayerInputComponentAboutToBeDestroyed();
    bool GetManagedContext(FInputContextWithType InContext);
}; // Size: 0x150
#pragma pack(pop)

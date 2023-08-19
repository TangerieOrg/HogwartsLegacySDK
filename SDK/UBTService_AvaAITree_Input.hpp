#pragma once
#include <cstdint>
#include "FInputContextWithType.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "UBTService_AvaAITree.hpp"
class UInputComponent;
#pragma pack(push, 1)
class UBTService_AvaAITree_Input : public UBTService_AvaAITree {
public:
    TArray<FName_GameLogicVarBool> GameLogicBoolVars; // 0xd0
    char pad_e0[0x18];
    static UBTService_AvaAITree_Input* StaticClass();
    void SetManagedContext(FInputContextWithType InContext, bool bFlag);
    void PlayerInputSoonToBeRemoved();
    void PlayerInputComponentCreated(UInputComponent* InputComponent);
    void PlayerInputComponentAboutToBeDestroyed();
    bool GetManagedContext(FInputContextWithType InContext);
}; // Size: 0xf8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class AActor;
class UAchievementManager;
#pragma pack(push, 1)
class ABP_StupefySpecialSendSpell_C : public AStupefySpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x8b8
    USceneComponent* DefaultSceneRoot; // 0x8c0
    static ABP_StupefySpecialSendSpell_C* StaticClass();
    void ReceiveBeginPlay();
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    void ExecuteUbergraph_BP_StupefySpecialSendSpell(int32_t EntryPoint, UAchievementManager* CallFunc_Get_ReturnValue, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected);
}; // Size: 0x8c8
#pragma pack(pop)

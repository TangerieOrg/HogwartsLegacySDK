#pragma once
#include <cstdint>
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class UTutorialSystem;
#pragma pack(push, 1)
class ABP_StupefySpell_C : public AStupefySpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x8b8
    USceneComponent* DefaultSceneRoot; // 0x8c0
    static ABP_StupefySpell_C* StaticClass();
    void OnStart();
    void ExecuteUbergraph_BP_StupefySpell(int32_t EntryPoint, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue);
}; // Size: 0x8c8
#pragma pack(pop)

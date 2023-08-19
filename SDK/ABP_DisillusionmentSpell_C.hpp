#pragma once
#include <cstdint>
#include "ADisillusionmentSpellTool.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class ABP_StealthTakedownSpell_C;
class AActor;
#pragma pack(push, 1)
class ABP_DisillusionmentSpell_C : public ADisillusionmentSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x858
    USceneComponent* DefaultSceneRoot; // 0x860
    ABP_StealthTakedownSpell_C* RefToStealthTakedown; // 0x868
    static ABP_DisillusionmentSpell_C* StaticClass();
    void OnDisillusionmentEnd0();
    void OnDisillusionmentStart0();
    void ExecuteUbergraph_BP_DisillusionmentSpell(int32_t EntryPoint, AActor* CallFunc_GetUltimateOwner_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x870
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class UInteractionArchitectAsset;
class AActor;
#pragma pack(push, 1)
class UABL_Enemy_Spawn_Death_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Enemy_Spawn_Death_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Enemy_Spawn_Death(int32_t EntryPoint, FHitResult CallFunc_MakeHitResult_ReturnValue, UAblAbilityContext* K2Node_Event_Context, TArray<UInteractionArchitectAsset*>& K2Node_MakeArray_Array, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_Kill_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)

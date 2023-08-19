#pragma once
#include <cstdint>
#include "EAblAbilityStartResult.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UClass;
class UAblAbilityComponent;
class UAblAbility;
class UAblAbilityContext;
class UAblCustomTaskScratchPad;
class AActor;
#pragma pack(push, 1)
class UAblAbilityBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAblAbilityBlueprintLibrary* StaticClass();
    static bool SetDrawCollisionQueries(bool Enable);
    static bool IsSuccessfulStartResult(EAblAbilityStartResult Result);
    static bool GetDrawCollisionQueries();
    static UAblAbility* GetAbilityObjectFromClass(UClass* Class);
    static UAblCustomTaskScratchPad* CreateCustomScratchPad(UAblAbilityContext* Context, UClass* ScratchPadClass);
    static UAblAbilityContext* CreateAbilityContext(UAblAbility* Ability, UAblAbilityComponent* AbilityComponent, AActor* Owner, AActor* Instigator);
    static EAblAbilityStartResult ActivateAbility(UAblAbilityContext* Context);
}; // Size: 0x28
#pragma pack(pop)

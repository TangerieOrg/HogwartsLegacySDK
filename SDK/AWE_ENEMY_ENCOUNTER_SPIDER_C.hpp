#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ADynamicObjectVolume;
class UWorldEventManager;
#pragma pack(push, 1)
class AWE_ENEMY_ENCOUNTER_SPIDER_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    FGameplayTag Tag; // 0x258
    TArray<FGameplayTag> LocatedTags; // 0x260
    ADynamicObjectVolume* DynamicObjectVolume_1_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER_RefProperty; // 0x270
    static AWE_ENEMY_ENCOUNTER_SPIDER_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER(int32_t EntryPoint, FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, UWorldEventManager* CallFunc_Get_ReturnValue, FGameplayTagContainer CallFunc_GetWorldEventLocationTags_ReturnValue, TArray<FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, FGameplayTag Temp_struct_Variable, FGameplayTag Temp_struct_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FGameplayTag Temp_struct_Variable_2, FGameplayTag CallFunc_Array_Random_OutItem, int32_t CallFunc_Array_Random_OutIndex, int32_t CallFunc_Array_Add_ReturnValue_1, FGameplayTag Temp_struct_Variable_3, int32_t CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, FGameplayTag Temp_struct_Variable_4, bool CallFunc_Array_Contains_ReturnValue_1, FGameplayTag Temp_struct_Variable_5, bool CallFunc_Array_Contains_ReturnValue_2);
}; // Size: 0x278
#pragma pack(pop)

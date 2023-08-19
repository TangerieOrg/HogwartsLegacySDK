#include "ADynamicObjectVolume.hpp"
#include "ALevelScriptActor.hpp"
#include "AWE_ENEMY_ENCOUNTER_SPIDER_C.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UWorldEventManager.hpp"
void AWE_ENEMY_ENCOUNTER_SPIDER_C::ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER(int32_t EntryPoint, FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, UWorldEventManager* CallFunc_Get_ReturnValue, FGameplayTagContainer CallFunc_GetWorldEventLocationTags_ReturnValue, TArray<FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, FGameplayTag Temp_struct_Variable, FGameplayTag Temp_struct_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FGameplayTag Temp_struct_Variable_2, FGameplayTag CallFunc_Array_Random_OutItem, int32_t CallFunc_Array_Random_OutIndex, int32_t CallFunc_Array_Add_ReturnValue_1, FGameplayTag Temp_struct_Variable_3, int32_t CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, FGameplayTag Temp_struct_Variable_4, bool CallFunc_Array_Contains_ReturnValue_1, FGameplayTag Temp_struct_Variable_5, bool CallFunc_Array_Contains_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_SPIDER_LevelInstance_17.WE_ENEMY_ENCOUNTER_SPIDER_C.ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER"));
    struct Params_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x8
        UWorldEventManager* CallFunc_Get_ReturnValue; // 0x28
        FGameplayTagContainer CallFunc_GetWorldEventLocationTags_ReturnValue; // 0x30
        TArray<FGameplayTag> CallFunc_BreakGameplayTagContainer_GameplayTags; // 0x50
        FGameplayTag Temp_struct_Variable; // 0x60
        FGameplayTag Temp_struct_Variable_1; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x74
        char pad_75[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x78
        FGameplayTag Temp_struct_Variable_2; // 0x7c
        FGameplayTag CallFunc_Array_Random_OutItem; // 0x84
        int32_t CallFunc_Array_Random_OutIndex; // 0x8c
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x90
        FGameplayTag Temp_struct_Variable_3; // 0x94
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x9c
        bool CallFunc_Array_Contains_ReturnValue; // 0xa0
        char pad_a1[0x3];
        FGameplayTag Temp_struct_Variable_4; // 0xa4
        bool CallFunc_Array_Contains_ReturnValue_1; // 0xac
        char pad_ad[0x3];
        FGameplayTag Temp_struct_Variable_5; // 0xb0
        bool CallFunc_Array_Contains_ReturnValue_2; // 0xb8
    }; // Size: 0xb9
    Params_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_SPIDER params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = (FGameplayTagContainer)CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UWorldEventManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetWorldEventLocationTags_ReturnValue = (FGameplayTagContainer)CallFunc_GetWorldEventLocationTags_ReturnValue;
    params.CallFunc_BreakGameplayTagContainer_GameplayTags = (TArray<FGameplayTag>)CallFunc_BreakGameplayTagContainer_GameplayTags;
    params.Temp_struct_Variable = (FGameplayTag)Temp_struct_Variable;
    params.Temp_struct_Variable_1 = (FGameplayTag)Temp_struct_Variable_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_struct_Variable_2 = (FGameplayTag)Temp_struct_Variable_2;
    params.CallFunc_Array_Random_OutItem = (FGameplayTag)CallFunc_Array_Random_OutItem;
    params.CallFunc_Array_Random_OutIndex = (int32_t)CallFunc_Array_Random_OutIndex;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.Temp_struct_Variable_3 = (FGameplayTag)Temp_struct_Variable_3;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.Temp_struct_Variable_4 = (FGameplayTag)Temp_struct_Variable_4;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.Temp_struct_Variable_5 = (FGameplayTag)Temp_struct_Variable_5;
    params.CallFunc_Array_Contains_ReturnValue_2 = (bool)CallFunc_Array_Contains_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_BreakGameplayTagContainer_GameplayTags = params.CallFunc_BreakGameplayTagContainer_GameplayTags;
}
AWE_ENEMY_ENCOUNTER_SPIDER_C* AWE_ENEMY_ENCOUNTER_SPIDER_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_SPIDER_LevelInstance_17.WE_ENEMY_ENCOUNTER_SPIDER_C");
    return (AWE_ENEMY_ENCOUNTER_SPIDER_C*)res;
}
void AWE_ENEMY_ENCOUNTER_SPIDER_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_SPIDER_LevelInstance_17.WE_ENEMY_ENCOUNTER_SPIDER_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}

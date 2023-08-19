#include "ADynamicObjectVolume.hpp"
#include "ALevelScriptActor.hpp"
#include "AWE_ENEMY_ENCOUNTER_DUGBOG_C.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UWorldEventManager.hpp"
AWE_ENEMY_ENCOUNTER_DUGBOG_C* AWE_ENEMY_ENCOUNTER_DUGBOG_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_DUGBOG_LevelInstance_18.WE_ENEMY_ENCOUNTER_DUGBOG_C");
    return (AWE_ENEMY_ENCOUNTER_DUGBOG_C*)res;
}
void AWE_ENEMY_ENCOUNTER_DUGBOG_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_DUGBOG_LevelInstance_18.WE_ENEMY_ENCOUNTER_DUGBOG_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AWE_ENEMY_ENCOUNTER_DUGBOG_C::ExecuteUbergraph_WE_ENEMY_ENCOUNTER_DUGBOG(int32_t EntryPoint, FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, UWorldEventManager* CallFunc_Get_ReturnValue, FGameplayTagContainer CallFunc_GetWorldEventLocationTags_ReturnValue, TArray<FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32_t CallFunc_Array_Length_ReturnValue, FGameplayTag Temp_struct_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FGameplayTag Temp_struct_Variable_1, FGameplayTag CallFunc_Array_Random_OutItem, int32_t CallFunc_Array_Random_OutIndex, int32_t CallFunc_Array_Add_ReturnValue_1, FGameplayTag Temp_struct_Variable_2, FGameplayTag Temp_struct_Variable_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/WorldEvents/LevelsToCook/Combat/EnemyEncounters/WE_ENEMY_ENCOUNTER_DUGBOG_LevelInstance_18.WE_ENEMY_ENCOUNTER_DUGBOG_C.ExecuteUbergraph_WE_ENEMY_ENCOUNTER_DUGBOG"));
    struct Params_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_DUGBOG {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x8
        UWorldEventManager* CallFunc_Get_ReturnValue; // 0x28
        FGameplayTagContainer CallFunc_GetWorldEventLocationTags_ReturnValue; // 0x30
        TArray<FGameplayTag> CallFunc_BreakGameplayTagContainer_GameplayTags; // 0x50
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        FGameplayTag Temp_struct_Variable; // 0x64
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x70
        FGameplayTag Temp_struct_Variable_1; // 0x74
        FGameplayTag CallFunc_Array_Random_OutItem; // 0x7c
        int32_t CallFunc_Array_Random_OutIndex; // 0x84
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x88
        FGameplayTag Temp_struct_Variable_2; // 0x8c
        FGameplayTag Temp_struct_Variable_3; // 0x94
        bool CallFunc_Array_Contains_ReturnValue; // 0x9c
        bool CallFunc_Array_Contains_ReturnValue_1; // 0x9d
    }; // Size: 0x9e
    Params_ExecuteUbergraph_WE_ENEMY_ENCOUNTER_DUGBOG params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = (FGameplayTagContainer)CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UWorldEventManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetWorldEventLocationTags_ReturnValue = (FGameplayTagContainer)CallFunc_GetWorldEventLocationTags_ReturnValue;
    params.CallFunc_BreakGameplayTagContainer_GameplayTags = (TArray<FGameplayTag>)CallFunc_BreakGameplayTagContainer_GameplayTags;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_struct_Variable = (FGameplayTag)Temp_struct_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_struct_Variable_1 = (FGameplayTag)Temp_struct_Variable_1;
    params.CallFunc_Array_Random_OutItem = (FGameplayTag)CallFunc_Array_Random_OutItem;
    params.CallFunc_Array_Random_OutIndex = (int32_t)CallFunc_Array_Random_OutIndex;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.Temp_struct_Variable_2 = (FGameplayTag)Temp_struct_Variable_2;
    params.Temp_struct_Variable_3 = (FGameplayTag)Temp_struct_Variable_3;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_BreakGameplayTagContainer_GameplayTags = params.CallFunc_BreakGameplayTagContainer_GameplayTags;
}

#include "FStatList.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStatsManager.hpp"
int32_t UStatsManager::ReadSetBitCount(FName Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.ReadSetBitCount"));
    struct Params_ReadSetBitCount {
        FName Key; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_ReadSetBitCount params{};
    params.Key = (FName)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UStatsManager* UStatsManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StatsManager");
    return (UStatsManager*)res;
}
bool UStatsManager::StatExists(FName Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.StatExists"));
    struct Params_StatExists {
        FName Key; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StatExists params{};
    params.Key = (FName)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStatsManager::UpdateStat(FName Key, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.UpdateStat"));
    struct Params_UpdateStat {
        FName Key; // 0x0
        int32_t Delta; // 0x8
    }; // Size: 0xc
    Params_UpdateStat params{};
    params.Key = (FName)Key;
    params.Delta = (int32_t)Delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStatsManager::StatChangedEvent__DelegateSignature(FName Key, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.StatsManager.StatChangedEvent__DelegateSignature"));
    struct Params_StatChangedEvent__DelegateSignature {
        FName Key; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_StatChangedEvent__DelegateSignature params{};
    params.Key = (FName)Key;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UStatsManager::SetStatBit(FName Key, int32_t bit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.SetStatBit"));
    struct Params_SetStatBit {
        FName Key; // 0x0
        int32_t bit; // 0x8
    }; // Size: 0xc
    Params_SetStatBit params{};
    params.Key = (FName)Key;
    params.bit = (int32_t)bit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStatsManager::SetStat(FName Key, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.SetStat"));
    struct Params_SetStat {
        FName Key; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_SetStat params{};
    params.Key = (FName)Key;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UStatsManager::ReadStat(FName Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.ReadStat"));
    struct Params_ReadStat {
        FName Key; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_ReadStat params{};
    params.Key = (FName)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UStatsManager::ReadBitSet(FName Key, int32_t bit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.ReadBitSet"));
    struct Params_ReadBitSet {
        FName Key; // 0x0
        int32_t bit; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_ReadBitSet params{};
    params.Key = (FName)Key;
    params.bit = (int32_t)bit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStatsManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
FName UStatsManager::GetStatName(FStatList StatList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.GetStatName"));
    struct Params_GetStatName {
        FStatList StatList; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetStatName params{};
    params.StatList = (FStatList)StatList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UStatsManager* UStatsManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.Get"));
    struct Params_Get {
        UStatsManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStatsManager*)params.ReturnValue;
}
void UStatsManager::GameStatSet(FString StatKey, int32_t StatValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.GameStatSet"));
    struct Params_GameStatSet {
        FString StatKey; // 0x0
        int32_t StatValue; // 0x10
    }; // Size: 0x14
    Params_GameStatSet params{};
    params.StatKey = (FString)StatKey;
    params.StatValue = (int32_t)StatValue;
    ProcessEvent(func, &params);
}
void UStatsManager::GameStatGet(FString StatKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.GameStatGet"));
    struct Params_GameStatGet {
        FString StatKey; // 0x0
    }; // Size: 0x10
    Params_GameStatGet params{};
    params.StatKey = (FString)StatKey;
    ProcessEvent(func, &params);
}
bool UStatsManager::DeleteStat(FName Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.DeleteStat"));
    struct Params_DeleteStat {
        FName Key; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DeleteStat params{};
    params.Key = (FName)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStatsManager::ClearStatBit(FName Key, int32_t bit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.ClearStatBit"));
    struct Params_ClearStatBit {
        FName Key; // 0x0
        int32_t bit; // 0x8
    }; // Size: 0xc
    Params_ClearStatBit params{};
    params.Key = (FName)Key;
    params.bit = (int32_t)bit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UStatsManager::AddNewStat(FName StatID, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StatsManager.AddNewStat"));
    struct Params_AddNewStat {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_AddNewStat params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

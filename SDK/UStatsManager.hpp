#pragma once
#include <cstdint>
#include "FStatList.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UStatsManager : public UObject {
public:
    char pad_28[0x108];
    static UStatsManager* StaticClass();
    static void UpdateStat(FName Key, int32_t Delta);
    static bool StatExists(FName Key);
    void StatChangedEvent__DelegateSignature(FName Key, int32_t Value, int32_t Delta);
    static void SetStatBit(FName Key, int32_t bit);
    static void SetStat(FName Key, int32_t Value);
    static int32_t ReadStat(FName Key);
    static int32_t ReadSetBitCount(FName Key);
    static bool ReadBitSet(FName Key, int32_t bit);
    void OnGameToBeSaved();
    static FName GetStatName(FStatList StatList);
    static UStatsManager* Get();
    void GameStatSet(FString StatKey, int32_t StatValue);
    void GameStatGet(FString StatKey);
    static bool DeleteStat(FName Key);
    static void ClearStatBit(FName Key, int32_t bit);
    static bool AddNewStat(FName StatID, int32_t Value);
}; // Size: 0x130
#pragma pack(pop)

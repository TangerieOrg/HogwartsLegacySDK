#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UEnemy_QBUpdate.hpp"
class UEnemy_TombProtector_QBUpdateDataAsset;
#pragma pack(push, 1)
class UEnemy_TombProtector_QBUpdate : public UEnemy_QBUpdate {
public:
    static UEnemy_TombProtector_QBUpdate* StaticClass();
    static void SetSpawnPoints(TArray<FVector>& InLocArray);
    static void SetSpawnAnchor(FVector& InLoc);
    static void SetDataAsset(UEnemy_TombProtector_QBUpdateDataAsset* InDataAsset);
}; // Size: 0x50
#pragma pack(pop)

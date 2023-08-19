#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
class UEnemy_TombProtector_QBUpdateDataAsset;
#pragma pack(push, 1)
class UEnemy_TombProtector_QBUpdateData : public UEnemy_QBUpdateData {
public:
    UEnemy_TombProtector_QBUpdateDataAsset* DataAsset; // 0x30
    static UEnemy_TombProtector_QBUpdateData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

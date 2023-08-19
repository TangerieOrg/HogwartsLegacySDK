#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Companion_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float PlayerTetherDist; // 0x30
    float PlayerInsideDist; // 0x34
    float StrafeDist; // 0x38
    float MinDistFromTarget; // 0x3c
    static UEnemy_Companion_QBUpdateData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

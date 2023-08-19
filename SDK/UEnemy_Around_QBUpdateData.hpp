#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Around_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float MinAngle; // 0x30
    float MaxAngle; // 0x34
    static UEnemy_Around_QBUpdateData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

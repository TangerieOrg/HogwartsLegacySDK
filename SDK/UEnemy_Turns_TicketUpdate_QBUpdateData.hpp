#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UEnemy_Turns_TicketUpdate_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float UpdateInterval; // 0x30
    char pad_34[0x4];
    UCurveFloat* SinceLastAttackedCountCurve; // 0x38
    UCurveFloat* OffScreenTimeCurve; // 0x40
    float RandomScoreMin; // 0x48
    float RandomScoreMax; // 0x4c
    float RandomScoreTimeout; // 0x50
    float RandomScoreTimeoutDeviation; // 0x54
    float TargettedScore; // 0x58
    char pad_5c[0x4];
    static UEnemy_Turns_TicketUpdate_QBUpdateData* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

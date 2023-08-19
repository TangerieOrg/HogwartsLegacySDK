#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_TooClose_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float TooCloseDist; // 0x30
    float TooCloseDistStop; // 0x34
    bool bTeammateTooCloseCheck; // 0x38
    char pad_39[0x3];
    float TeammateTooCloseDist; // 0x3c
    float TeammateTooCloseDistStop; // 0x40
    char pad_44[0x4];
    static UEnemy_TooClose_QBUpdateData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

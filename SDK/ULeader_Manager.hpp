#pragma once
#include <cstdint>
#include "UEnemy_Manager.hpp"
#pragma pack(push, 1)
class ULeader_Manager : public UEnemy_Manager {
public:
    char pad_1b8[0x18];
    static ULeader_Manager* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UEnemy_Manager.hpp"
#pragma pack(push, 1)
class UCompanion_Manager : public UEnemy_Manager {
public:
    static UCompanion_Manager* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)

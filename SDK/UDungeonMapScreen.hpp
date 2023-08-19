#pragma once
#include <cstdint>
#include "UMapScreenBase.hpp"
class UMapDungeon;
#pragma pack(push, 1)
class UDungeonMapScreen : public UMapScreenBase {
public:
    UMapDungeon* DungeonMap; // 0x4d8
    static UDungeonMapScreen* StaticClass();
}; // Size: 0x4e0
#pragma pack(pop)

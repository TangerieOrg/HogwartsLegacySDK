#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGameLogicGameSettings;
#pragma pack(push, 1)
class UGameLogicMaster : public UObject {
public:
    UGameLogicGameSettings* GameLogicGameSettings; // 0x28
    static UGameLogicMaster* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

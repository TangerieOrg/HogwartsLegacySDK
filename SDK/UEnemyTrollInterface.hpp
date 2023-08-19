#pragma once
#include <cstdint>
#include "ETrollSwingDirection.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UEnemyTrollInterface : public UInterface {
public:
    static UEnemyTrollInterface* StaticClass();
    void SetTrollSwingDirection(ETrollSwingDirection TrollSwingDirection);
    ETrollSwingDirection GetTrollSwingDirection();
}; // Size: 0x28
#pragma pack(pop)

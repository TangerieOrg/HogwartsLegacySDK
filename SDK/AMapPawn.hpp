#pragma once
#include <cstdint>
#include "ADefaultPawn.hpp"
class UCameraComponent;
#pragma pack(push, 1)
class AMapPawn : public ADefaultPawn {
public:
    UCameraComponent* CameraComponent; // 0x2d0
    char pad_2d8[0x40];
    static AMapPawn* StaticClass();
}; // Size: 0x318
#pragma pack(pop)

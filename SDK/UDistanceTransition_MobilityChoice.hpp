#pragma once
#include <cstdint>
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class UDistanceTransition_MobilityChoice : public UNPC_MobilityChoice {
public:
    float WalkMinRange; // 0x28
    float WalkMaxRange; // 0x2c
    float JogMinRange; // 0x30
    float JogMaxRange; // 0x34
    float RunMinRange; // 0x38
    float RunMaxRange; // 0x3c
    char pad_40[0x8];
    static UDistanceTransition_MobilityChoice* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

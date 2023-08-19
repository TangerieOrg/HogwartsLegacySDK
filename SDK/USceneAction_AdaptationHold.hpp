#pragma once
#include <cstdint>
#include "USceneAction_Adaptation.hpp"
#pragma pack(push, 1)
class USceneAction_AdaptationHold : public USceneAction_Adaptation {
public:
    int32_t Affects; // 0x98
    char pad_9c[0x4];
    static USceneAction_AdaptationHold* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

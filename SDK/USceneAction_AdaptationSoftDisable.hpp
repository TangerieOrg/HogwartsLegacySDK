#pragma once
#include <cstdint>
#include "ESceneActionAdaptationSoftDisableMethod.hpp"
#include "USceneAction_Adaptation.hpp"
#pragma pack(push, 1)
class USceneAction_AdaptationSoftDisable : public USceneAction_Adaptation {
public:
    int32_t Affects; // 0x98
    ESceneActionAdaptationSoftDisableMethod Method; // 0x9c
    bool bIncludeBias; // 0x9d
    char pad_9e[0x2];
    static USceneAction_AdaptationSoftDisable* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

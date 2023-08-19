#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_LoadTutorial : public URPGTriggerEffect_Base {
public:
    FName TutorialName; // 0x40
    static URPGTriggerEffect_LoadTutorial* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

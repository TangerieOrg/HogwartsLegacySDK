#pragma once
#include <cstdint>
#include "AAnimationArchitect_Character.hpp"
class UObjectStateComponent;
#pragma pack(push, 1)
class AUIDummyActor : public AAnimationArchitect_Character {
public:
    char pad_4f0[0x8];
    UObjectStateComponent* ObjectStateComponent; // 0x4f8
    char pad_500[0x20];
    bool DesiredVisibility; // 0x520
    char pad_521[0x1f];
    static AUIDummyActor* StaticClass();
    void ShowDummy();
    void HideDummy();
}; // Size: 0x540
#pragma pack(pop)

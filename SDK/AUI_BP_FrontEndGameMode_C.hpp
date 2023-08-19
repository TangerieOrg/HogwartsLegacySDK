#pragma once
#include <cstdint>
#include "AGameModeBase.hpp"
class USceneComponent;
#pragma pack(push, 1)
class AUI_BP_FrontEndGameMode_C : public AGameModeBase {
public:
    USceneComponent* DefaultSceneRoot; // 0x2e8
    static AUI_BP_FrontEndGameMode_C* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)

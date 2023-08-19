#pragma once
#include <cstdint>
#include "ASocialReasoning.hpp"
class UStationArchitectComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_SocialReasoning_C : public ASocialReasoning {
public:
    UStationArchitectComponent* StationArchitect; // 0x530
    USceneComponent* DefaultSceneRoot; // 0x538
    static ABP_SocialReasoning_C* StaticClass();
}; // Size: 0x540
#pragma pack(pop)

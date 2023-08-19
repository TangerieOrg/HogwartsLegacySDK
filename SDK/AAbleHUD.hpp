#pragma once
#include <cstdint>
#include "APreloadArchitectHUD.hpp"
class AActor;
#pragma pack(push, 1)
class AAbleHUD : public APreloadArchitectHUD {
public:
    static AAbleHUD* StaticClass();
    void UpdateDebugTarget();
    void ToggleAbleHUD();
    void SetTarget(AActor* InActor);
}; // Size: 0x338
#pragma pack(pop)

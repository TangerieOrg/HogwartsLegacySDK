#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class URevealInterface : public UInterface {
public:
    static URevealInterface* StaticClass();
    bool StartReveal(AActor* Instigator, bool ShowOccluded);
    void OnHiddenObjectRevealed(AActor* Instigator);
    void OnHiddenObjectHinted(AActor* Instigator);
    void OnEndReveal(AActor* Instigator);
    void OnBeginRevealFade(AActor* Instigator);
}; // Size: 0x28
#pragma pack(pop)

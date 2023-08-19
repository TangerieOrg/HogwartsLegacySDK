#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class ULEDFadeEffect;
struct FColor;
#pragma pack(push, 1)
class ULEDEffects : public UActorComponent {
public:
    char pad_c8[0x10];
    TArray<ULEDFadeEffect*> faders; // 0xd8
    ULEDFadeEffect* BaseLEDFadeEffect; // 0xe8
    char pad_f0[0x50];
    static ULEDEffects* StaticClass();
    void SetColor(int32_t& ControllerId, FColor& Color);
    void ResetLED(int32_t& ControllerId);
    void ResetAll();
    bool GetActiveColor(FColor& Color);
}; // Size: 0x140
#pragma pack(pop)

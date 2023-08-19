#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EForceRenderSettingsPhase.hpp"
#include "FForceRenderSettingsCommand.hpp"
#pragma pack(push, 1)
class AForceRenderSettings : public AActor {
public:
    TArray<FForceRenderSettingsCommand> Commands; // 0x248
    bool bDisableAll; // 0x258
    char pad_259[0x7];
    static AForceRenderSettings* StaticClass();
    void QueryAll();
    bool IsPlayInEditor();
    static bool IsEditor();
    void ApplyNow();
    void Apply(EForceRenderSettingsPhase Phase);
}; // Size: 0x260
#pragma pack(pop)

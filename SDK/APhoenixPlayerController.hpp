#pragma once
#include <cstdint>
#include "ABiped_PlayerController.hpp"
class UTriggerEffectManager;
class ULEDEffects;
class UEncounterTracker;
class UClass;
class ULEDFadeEffect;
class APhoenixHUD;
#pragma pack(push, 1)
class APhoenixPlayerController : public ABiped_PlayerController {
public:
    char pad_950[0x10];
    UTriggerEffectManager* TriggerEffectManager; // 0x960
    ULEDEffects* LEDEffects; // 0x968
    UClass* PlayerHouseLEDFadeEffect; // 0x970
    UClass* DamageTakenLEDEffect; // 0x978
    ULEDFadeEffect* pPlayerHouseLEDFadeEffect; // 0x980
    ULEDFadeEffect* pDamageTakenLEDEffect; // 0x988
    APhoenixHUD* m_pPhoenixHUD; // 0x990
    UEncounterTracker* m_pEncounterTracker; // 0x998
    static APhoenixPlayerController* StaticClass();
    void MapCaptureStart();
}; // Size: 0x9a0
#pragma pack(pop)

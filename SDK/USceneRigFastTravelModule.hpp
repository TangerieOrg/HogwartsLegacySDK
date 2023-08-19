#pragma once
#include <cstdint>
#include "EFT_TriggerType.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigFastTravelModule : public UObject {
public:
    static USceneRigFastTravelModule* StaticClass();
    static void SetFastTravelTriggerName(FString TriggerName, EFT_TriggerType TriggerType);
    static FString GetFastTravelTriggerName(EFT_TriggerType TriggerType);
    static void ClearFastTravelTriggerName(EFT_TriggerType TriggerType);
}; // Size: 0x28
#pragma pack(pop)

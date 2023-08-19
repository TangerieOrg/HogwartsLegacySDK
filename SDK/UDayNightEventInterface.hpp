#pragma once
#include <cstdint>
#include "EDayNightEventDirection.hpp"
#include "EMoonPhaseName.hpp"
#include "FDateTime.hpp"
#include "FSolarNormalizedTime.hpp"
#include "UInterface.hpp"
class UDayNightMasterComponent;
#pragma pack(push, 1)
class UDayNightEventInterface : public UInterface {
public:
    static UDayNightEventInterface* StaticClass();
    void DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate);
    void DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate);
}; // Size: 0x28
#pragma pack(pop)

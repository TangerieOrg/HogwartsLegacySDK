#pragma once
#include <cstdint>
#include "FStatsComponentReportSettings.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UStatsComponentReportComponent : public UActorComponent {
public:
    FStatsComponentReportSettings Report; // 0xc8
    uint32_t OnReport; // 0xe0
    uint32_t NextReport; // 0xe4
    static UStatsComponentReportComponent* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportGeneral {
    DateTime = 0,
    Time = 1,
    NormalizedTime = 2,
    ProbeLerp = 3,
    ProbeIndex = 4,
    BlendDomainIndoors = 5,
    BlendDomainDayNight = 6,
    BlendDomainOvercast = 7,
    Eye = 8,
    GlobalSS = 9,
    EDayNightReportGeneral_MAX = 10,
};
#pragma pack(pop)

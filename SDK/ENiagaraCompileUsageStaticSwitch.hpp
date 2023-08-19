#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraCompileUsageStaticSwitch {
    Spawn = 0,
    Update = 1,
    Event = 2,
    SimulationStage = 3,
    Default = 4,
    ENiagaraCompileUsageStaticSwitch_MAX = 5,
};
#pragma pack(pop)

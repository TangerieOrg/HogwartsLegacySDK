#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherDecalParameterType {
    EnvGlobals = 0,
    MID = 1,
    MPC = 2,
    NPC = 3,
    SystemMPC = 4,
    SystemNPC = 5,
    RTPC = 6,
    SceneRigEnvGlobals = 7,
    EWeatherDecalParameterType_MAX = 8,
};
#pragma pack(pop)

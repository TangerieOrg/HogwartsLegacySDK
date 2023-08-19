#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigProxyActor_PlatformHide : int8_t {
    None = 0,
    SwitchOnly = 1,
    LastGenAndSwitch = 2,
    ESceneRigProxyActor_MAX = 3,
};
#pragma pack(pop)

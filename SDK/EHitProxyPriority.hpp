#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHitProxyPriority {
    HPP_World = 0,
    HPP_Wireframe = 1,
    HPP_Foreground = 2,
    HPP_UI = 3,
    HPP_MAX = 4,
};
#pragma pack(pop)

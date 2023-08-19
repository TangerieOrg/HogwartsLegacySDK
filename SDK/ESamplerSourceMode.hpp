#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESamplerSourceMode {
    SSM_FromTextureAsset = 0,
    SSM_Wrap_WorldGroupSettings = 1,
    SSM_Clamp_WorldGroupSettings = 2,
    SSM_MAX = 3,
};
#pragma pack(pop)

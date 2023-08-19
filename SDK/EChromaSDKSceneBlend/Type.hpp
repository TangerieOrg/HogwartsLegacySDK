#pragma once
#include <cstdint>
namespace EChromaSDKSceneBlend {
#pragma pack(push, 1)
enum Type : uint8_t {
    SB_None = 0,
    SB_Invert = 1,
    SB_Threshold = 2,
    SB_Lerp = 3,
    SB_MAX = 4,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EChromaSDKDevice1DEnum {
#pragma pack(push, 1)
enum Type : uint8_t {
    DE_ChromaLink = 0,
    DE_Headset = 1,
    DE_Mousepad = 2,
    DE_MAX = 3,
};
#pragma pack(pop)
}

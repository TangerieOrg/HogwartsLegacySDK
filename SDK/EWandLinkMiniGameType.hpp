#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWandLinkMiniGameType : uint8_t {
    StickAndButton = 0,
    ButtonMash = 1,
    NewButtonMash = 2,
    EWandLinkMiniGameType_MAX = 3,
};
#pragma pack(pop)

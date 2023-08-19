#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERemoteControlEvent : uint8_t {
    PreObjectPropertyChanged = 0,
    ObjectPropertyChanged = 1,
    EventCount = 2,
    ERemoteControlEvent_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSequenceOriginType : uint8_t {
    Default = 0,
    CustomLottery = 1,
    Volume = 2,
    CommandConsole = 3,
    Override = 4,
    Stack = 5,
    SystemOverride = 6,
    EWeatherSequenceOriginType_MAX = 7,
};
#pragma pack(pop)

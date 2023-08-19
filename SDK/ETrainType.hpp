#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrainType : uint8_t {
    TRAIN_ENGINE = 0,
    TRAIN_COAL = 1,
    TRAIN_CARRIAGE = 2,
    MAX = 3,
};
#pragma pack(pop)

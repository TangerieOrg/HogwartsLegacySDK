#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_StimulusType {
    None = 0,
    FinisherAnticipate = 1,
    FinisherAware = 2,
    FinisherReact = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)

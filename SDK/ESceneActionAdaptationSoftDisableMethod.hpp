#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneActionAdaptationSoftDisableMethod : uint8_t {
    MinExposure = 0,
    AverageMinMaxExposure = 1,
    Zero = 2,
    NegativeTwenty = 3,
    ESceneActionAdaptationSoftDisableMethod_MAX = 4,
};
#pragma pack(pop)

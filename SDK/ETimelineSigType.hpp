#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETimelineSigType {
    ETS_EventSignature = 0,
    ETS_FloatSignature = 1,
    ETS_VectorSignature = 2,
    ETS_LinearColorSignature = 3,
    ETS_InvalidSignature = 4,
    ETS_MAX = 5,
};
#pragma pack(pop)

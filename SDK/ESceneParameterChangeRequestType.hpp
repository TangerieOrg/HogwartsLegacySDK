#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneParameterChangeRequestType : uint8_t {
    String = 0,
    Bool = 1,
    Float = 2,
    Object = 3,
    Int = 4,
    Transform = 5,
    ESceneParameterChangeRequestType_MAX = 6,
};
#pragma pack(pop)

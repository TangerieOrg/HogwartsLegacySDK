#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetDesignFlags {
    None = 0,
    Designing = 1,
    ShowOutline = 2,
    ExecutePreConstruct = 4,
    EWidgetDesignFlags_MAX = 5,
};
#pragma pack(pop)

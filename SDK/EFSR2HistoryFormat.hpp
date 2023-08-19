#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFSR2HistoryFormat : int32_t {
    FloatRGBA = 0,
    FloatR11G11B10 = 1,
    EFSR2HistoryFormat_MAX = 2,
};
#pragma pack(pop)

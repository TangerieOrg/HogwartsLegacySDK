#pragma once
#include <cstdint>
namespace ESlateColorStylingMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    UseColor_Specified = 0,
    UseColor_Specified_Link = 1,
    UseColor_Foreground = 2,
    UseColor_Foreground_Subdued = 3,
    UseColor_MAX = 4,
};
#pragma pack(pop)
}

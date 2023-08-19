#pragma once
#include <cstdint>
namespace EProgressBarFillType {
#pragma pack(push, 1)
enum Type : uint8_t {
    LeftToRight = 0,
    RightToLeft = 1,
    FillFromCenter = 2,
    TopToBottom = 3,
    BottomToTop = 4,
    EProgressBarFillType_MAX = 5,
};
#pragma pack(pop)
}

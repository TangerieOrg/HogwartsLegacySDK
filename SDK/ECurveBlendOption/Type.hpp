#pragma once
#include <cstdint>
namespace ECurveBlendOption {
#pragma pack(push, 1)
enum Type : uint8_t {
    Override = 0,
    DoNotOverride = 1,
    NormalizeByWeight = 2,
    BlendByWeight = 3,
    UseBasePose = 4,
    UseMaxValue = 5,
    UseMinValue = 6,
    ECurveBlendOption_MAX = 7,
};
#pragma pack(pop)
}

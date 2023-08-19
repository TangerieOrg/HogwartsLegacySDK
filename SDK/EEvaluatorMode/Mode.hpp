#pragma once
#include <cstdint>
namespace EEvaluatorMode {
#pragma pack(push, 1)
enum Mode : uint8_t {
    EM_Standard = 0,
    EM_Freeze = 1,
    EM_DelayedFreeze = 2,
    EM_MAX = 3,
};
#pragma pack(pop)
}

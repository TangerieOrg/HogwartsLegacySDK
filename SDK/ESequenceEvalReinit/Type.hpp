#pragma once
#include <cstdint>
namespace ESequenceEvalReinit {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoReset = 0,
    StartPosition = 1,
    ExplicitTime = 2,
    ESequenceEvalReinit_MAX = 3,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EMoveInterpRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoInterp = 0,
    Interp = 1,
    InterpConstant = 2,
    EMoveInterpRule_MAX = 3,
};
#pragma pack(pop)
}

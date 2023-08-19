#pragma once
#include <cstdint>
namespace EEnvQueryParam {
#pragma pack(push, 1)
enum Type {
    Float = 0,
    Int = 1,
    Bool = 2,
    EEnvQueryParam_MAX = 3,
};
#pragma pack(pop)
}

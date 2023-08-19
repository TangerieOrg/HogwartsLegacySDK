#pragma once
#include <cstdint>
namespace EGameplayTagQueryExprType {
#pragma pack(push, 1)
enum Type {
    Undefined = 0,
    AnyTagsMatch = 1,
    AllTagsMatch = 2,
    NoTagsMatch = 3,
    AnyExprMatch = 4,
    AllExprMatch = 5,
    NoExprMatch = 6,
    EGameplayTagQueryExprType_MAX = 7,
};
#pragma pack(pop)
}

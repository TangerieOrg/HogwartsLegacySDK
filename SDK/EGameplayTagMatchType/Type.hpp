#pragma once
#include <cstdint>
namespace EGameplayTagMatchType {
#pragma pack(push, 1)
enum Type {
    Explicit = 0,
    IncludeParentTags = 1,
    EGameplayTagMatchType_MAX = 2,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace ETranslucentSortPolicy {
#pragma pack(push, 1)
enum Type : uint8_t {
    SortByDistance = 0,
    SortByProjectedZ = 1,
    SortAlongAxis = 2,
    ETranslucentSortPolicy_MAX = 3,
};
#pragma pack(pop)
}

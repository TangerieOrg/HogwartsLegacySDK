#pragma once
#include <cstdint>
namespace EPathExistanceQueryType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NavmeshRaycast2D = 0,
    HierarchicalQuery = 1,
    RegularPathFinding = 2,
    EPathExistanceQueryType_MAX = 3,
};
#pragma pack(pop)
}

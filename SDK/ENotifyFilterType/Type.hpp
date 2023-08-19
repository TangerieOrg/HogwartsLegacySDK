#pragma once
#include <cstdint>
namespace ENotifyFilterType {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoFiltering = 0,
    LOD = 1,
    ENotifyFilterType_MAX = 2,
};
#pragma pack(pop)
}

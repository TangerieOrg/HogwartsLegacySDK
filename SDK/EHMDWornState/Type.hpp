#pragma once
#include <cstdint>
namespace EHMDWornState {
#pragma pack(push, 1)
enum Type : uint8_t {
    Unknown = 0,
    Worn = 1,
    NotWorn = 2,
    EHMDWornState_MAX = 3,
};
#pragma pack(pop)
}

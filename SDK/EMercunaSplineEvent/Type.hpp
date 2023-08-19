#pragma once
#include <cstdint>
namespace EMercunaSplineEvent {
#pragma pack(push, 1)
enum Type : uint8_t {
    Ready = 0,
    Updated = 1,
    Invalid = 2,
    EMercunaSplineEvent_MAX = 3,
};
#pragma pack(pop)
}

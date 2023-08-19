#pragma once
#include <cstdint>
namespace EMercunaPathEvent {
#pragma pack(push, 1)
enum Type {
    Ready = 0,
    Updated = 1,
    Invalid = 2,
    EMercunaPathEvent_MAX = 3,
};
#pragma pack(pop)
}

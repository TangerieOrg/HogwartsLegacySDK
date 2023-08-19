#pragma once
#include <cstdint>
namespace EDemoPlayFailure {
#pragma pack(push, 1)
enum Type {
    Generic = 0,
    DemoNotFound = 1,
    Corrupt = 2,
    InvalidVersion = 3,
    InitBase = 4,
    GameSpecificHeader = 5,
    ReplayStreamerInternal = 6,
    LoadMap = 7,
    Serialization = 8,
    EDemoPlayFailure_MAX = 9,
};
#pragma pack(pop)
}

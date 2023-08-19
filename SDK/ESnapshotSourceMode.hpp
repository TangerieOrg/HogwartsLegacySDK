#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESnapshotSourceMode : uint8_t {
    NamedSnapshot = 0,
    SnapshotPin = 1,
    ESnapshotSourceMode_MAX = 2,
};
#pragma pack(pop)

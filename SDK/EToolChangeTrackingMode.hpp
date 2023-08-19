#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EToolChangeTrackingMode {
    NoChangeTracking = 1,
    UndoToExit = 2,
    FullUndoRedo = 3,
    EToolChangeTrackingMode_MAX = 4,
};
#pragma pack(pop)

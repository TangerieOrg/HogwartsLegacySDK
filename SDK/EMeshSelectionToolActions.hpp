#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshSelectionToolActions {
    NoAction = 0,
    SelectAll = 1,
    ClearSelection = 2,
    InvertSelection = 3,
    GrowSelection = 4,
    ShrinkSelection = 5,
    ExpandToConnected = 6,
    SelectLargestComponentByTriCount = 7,
    SelectLargestComponentByArea = 8,
    OptimizeSelection = 9,
    DeleteSelected = 10,
    DisconnectSelected = 11,
    SeparateSelected = 12,
    FlipSelected = 13,
    CreateGroup = 14,
    CycleSelectionMode = 15,
    CycleViewMode = 16,
    EMeshSelectionToolActions_MAX = 17,
};
#pragma pack(pop)

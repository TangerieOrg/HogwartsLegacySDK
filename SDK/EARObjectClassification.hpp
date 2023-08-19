#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARObjectClassification : uint8_t {
    NotApplicable = 0,
    Unknown = 1,
    Wall = 2,
    Ceiling = 3,
    Floor = 4,
    Table = 5,
    Seat = 6,
    Face = 7,
    Image = 8,
    World = 9,
    SceneObject = 10,
    HandMesh = 11,
    Door = 12,
    Window = 13,
    EARObjectClassification_MAX = 14,
};
#pragma pack(pop)

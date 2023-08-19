#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEditMeshPolygonsToolActions {
    NoAction = 0,
    PlaneCut = 1,
    Extrude = 2,
    Offset = 3,
    Inset = 4,
    Outset = 5,
    Merge = 6,
    Delete = 7,
    CutFaces = 8,
    RecalculateNormals = 9,
    FlipNormals = 10,
    Retriangulate = 11,
    Decompose = 12,
    Disconnect = 13,
    CollapseEdge = 14,
    WeldEdges = 15,
    StraightenEdge = 16,
    FillHole = 17,
    PlanarProjectionUV = 18,
    PokeSingleFace = 19,
    SplitSingleEdge = 20,
    FlipSingleEdge = 21,
    CollapseSingleEdge = 22,
    EEditMeshPolygonsToolActions_MAX = 23,
};
#pragma pack(pop)

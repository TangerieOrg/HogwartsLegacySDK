#include "UProceduralDiscToolProperties.hpp"
#include "UProceduralPuncturedDiscToolProperties.hpp"
UProceduralPuncturedDiscToolProperties* UProceduralPuncturedDiscToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralPuncturedDiscToolProperties");
    return (UProceduralPuncturedDiscToolProperties*)res;
}

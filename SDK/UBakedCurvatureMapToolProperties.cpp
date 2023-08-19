#include "EBakedCurvatureClampMode.hpp"
#include "EBakedCurvatureColorMode.hpp"
#include "EBakedCurvatureTypeMode.hpp"
#include "UBakedCurvatureMapToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBakedCurvatureMapToolProperties* UBakedCurvatureMapToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakedCurvatureMapToolProperties");
    return (UBakedCurvatureMapToolProperties*)res;
}

#include "FVector.hpp"
#include "UDisplaceMeshSineWaveProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDisplaceMeshSineWaveProperties* UDisplaceMeshSineWaveProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DisplaceMeshSineWaveProperties");
    return (UDisplaceMeshSineWaveProperties*)res;
}

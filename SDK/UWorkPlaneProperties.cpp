#include "FQuat.hpp"
#include "FVector.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UWorkPlaneProperties.hpp"
UWorkPlaneProperties* UWorkPlaneProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.WorkPlaneProperties");
    return (UWorkPlaneProperties*)res;
}

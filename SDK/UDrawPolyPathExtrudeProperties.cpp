#include "EDrawPolyPathExtrudeDirection.hpp"
#include "UDrawPolyPathExtrudeProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDrawPolyPathExtrudeProperties* UDrawPolyPathExtrudeProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolyPathExtrudeProperties");
    return (UDrawPolyPathExtrudeProperties*)res;
}

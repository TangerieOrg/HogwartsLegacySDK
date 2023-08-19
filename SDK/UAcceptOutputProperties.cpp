#include "UAcceptOutputProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UAcceptOutputProperties* UAcceptOutputProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AcceptOutputProperties");
    return (UAcceptOutputProperties*)res;
}

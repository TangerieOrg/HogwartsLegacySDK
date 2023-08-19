#include "UDynamicMeshReplacementChangeTarget.hpp"
#include "UObject.hpp"
UDynamicMeshReplacementChangeTarget* UDynamicMeshReplacementChangeTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget");
    return (UDynamicMeshReplacementChangeTarget*)res;
}

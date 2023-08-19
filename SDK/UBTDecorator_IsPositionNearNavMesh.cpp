#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_IsPositionNearNavMesh.hpp"
UBTDecorator_IsPositionNearNavMesh* UBTDecorator_IsPositionNearNavMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_IsPositionNearNavMesh");
    return (UBTDecorator_IsPositionNearNavMesh*)res;
}

#include "FHierarchicalSimplification.hpp"
#include "UHierarchicalLODSetup.hpp"
#include "UObject.hpp"
UHierarchicalLODSetup* UHierarchicalLODSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HierarchicalLODSetup");
    return (UHierarchicalLODSetup*)res;
}

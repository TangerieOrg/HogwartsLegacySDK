#include "ANavigationData.hpp"
#include "ANavigationGraph.hpp"
ANavigationGraph* ANavigationGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationGraph");
    return (ANavigationGraph*)res;
}

#include "UNavArea.hpp"
#include "UNavArea_Obstacle.hpp"
UNavArea_Obstacle* UNavArea_Obstacle::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavArea_Obstacle");
    return (UNavArea_Obstacle*)res;
}

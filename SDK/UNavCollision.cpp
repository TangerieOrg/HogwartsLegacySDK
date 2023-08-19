#include "FNavCollisionBox.hpp"
#include "FNavCollisionCylinder.hpp"
#include "UClass.hpp"
#include "UNavCollision.hpp"
#include "UNavCollisionBase.hpp"
UNavCollision* UNavCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavCollision");
    return (UNavCollision*)res;
}

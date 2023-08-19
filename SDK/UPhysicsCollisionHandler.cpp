#include "UObject.hpp"
#include "UPhysicsCollisionHandler.hpp"
#include "USoundBase.hpp"
UPhysicsCollisionHandler* UPhysicsCollisionHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsCollisionHandler");
    return (UPhysicsCollisionHandler*)res;
}

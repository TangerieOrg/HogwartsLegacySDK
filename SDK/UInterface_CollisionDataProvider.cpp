#include "UInterface.hpp"
#include "UInterface_CollisionDataProvider.hpp"
UInterface_CollisionDataProvider* UInterface_CollisionDataProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Interface_CollisionDataProvider");
    return (UInterface_CollisionDataProvider*)res;
}

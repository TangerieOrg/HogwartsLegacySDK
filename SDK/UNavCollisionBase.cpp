#include "UNavCollisionBase.hpp"
#include "UObject.hpp"
UNavCollisionBase* UNavCollisionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavCollisionBase");
    return (UNavCollisionBase*)res;
}

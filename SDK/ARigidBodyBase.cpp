#include "AActor.hpp"
#include "ARigidBodyBase.hpp"
ARigidBodyBase* ARigidBodyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RigidBodyBase");
    return (ARigidBodyBase*)res;
}

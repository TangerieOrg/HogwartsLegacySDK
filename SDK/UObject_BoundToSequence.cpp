#include "UActorProvider.hpp"
#include "UObject_BoundToSequence.hpp"
UObject_BoundToSequence* UObject_BoundToSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Object_BoundToSequence");
    return (UObject_BoundToSequence*)res;
}

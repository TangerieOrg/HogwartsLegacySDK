#include "AActor.hpp"
#include "ALightCollectionActor.hpp"
ALightCollectionActor* ALightCollectionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightCollectionActor");
    return (ALightCollectionActor*)res;
}

#include "AActor.hpp"
#include "AActor_SubsonicProximity.hpp"
#include "USphereComponent.hpp"
AActor_SubsonicProximity* AActor_SubsonicProximity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_SubsonicProximity");
    return (AActor_SubsonicProximity*)res;
}

#include "UActorComponent.hpp"
#include "UFaceIDComponent.hpp"
UFaceIDComponent* UFaceIDComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FaceIDComponent");
    return (UFaceIDComponent*)res;
}

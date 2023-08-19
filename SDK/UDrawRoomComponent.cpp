#include "UDrawRoomComponent.hpp"
#include "UPrimitiveComponent.hpp"
UDrawRoomComponent* UDrawRoomComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.DrawRoomComponent");
    return (UDrawRoomComponent*)res;
}

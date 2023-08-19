#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#include "UFlyingBroomAudio.hpp"
UFlyingBroomAudio* UFlyingBroomAudio::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomAudio");
    return (UFlyingBroomAudio*)res;
}

#include "UActorComponent.hpp"
#include "UImgMediaPlaybackComponent.hpp"
UImgMediaPlaybackComponent* UImgMediaPlaybackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ImgMediaEngine.ImgMediaPlaybackComponent");
    return (UImgMediaPlaybackComponent*)res;
}

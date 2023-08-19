#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightFollowCamera.hpp"
UDirectionalLightFollowCamera* UDirectionalLightFollowCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightFollowCamera");
    return (UDirectionalLightFollowCamera*)res;
}

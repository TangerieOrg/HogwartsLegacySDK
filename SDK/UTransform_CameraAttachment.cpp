#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_CameraAttachment.hpp"
UTransform_CameraAttachment* UTransform_CameraAttachment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_CameraAttachment");
    return (UTransform_CameraAttachment*)res;
}

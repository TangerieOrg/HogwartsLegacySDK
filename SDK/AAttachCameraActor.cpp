#include "AActor.hpp"
#include "AAttachCameraActor.hpp"
#include "UAttachCameraComponent.hpp"
AAttachCameraActor* AAttachCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.AttachCameraActor");
    return (AAttachCameraActor*)res;
}

#include "UAkAcousticTextureSetComponent.hpp"
#include "UAkGameObject.hpp"
#include "UAkRoomComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UAkRoomComponent* UAkRoomComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkRoomComponent");
    return (UAkRoomComponent*)res;
}
UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent"));
    struct Params_GetPrimitiveParent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPrimitiveParent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void UAkRoomComponent::SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent"));
    struct Params_SetGeometryComponent {
        UAkAcousticTextureSetComponent* textureSetComponent; // 0x0
    }; // Size: 0x8
    Params_SetGeometryComponent params{};
    params.textureSetComponent = (UAkAcousticTextureSetComponent*)textureSetComponent;
    ProcessEvent(func, &params);
}

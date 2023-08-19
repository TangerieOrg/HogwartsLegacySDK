#include "UAkAcousticTextureSetComponent.hpp"
#include "UAkAuxBus.hpp"
#include "UAkLateReverbComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAkLateReverbComponent* UAkLateReverbComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkLateReverbComponent");
    return (UAkLateReverbComponent*)res;
}
void UAkLateReverbComponent::AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent"));
    struct Params_AssociateAkTextureSetComponent {
        UAkAcousticTextureSetComponent* textureSetComponent; // 0x0
    }; // Size: 0x8
    Params_AssociateAkTextureSetComponent params{};
    params.textureSetComponent = (UAkAcousticTextureSetComponent*)textureSetComponent;
    ProcessEvent(func, &params);
}

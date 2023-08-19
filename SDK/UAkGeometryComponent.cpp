#include "AActor.hpp"
#include "AkMeshType.hpp"
#include "FAkGeometryData.hpp"
#include "FAkGeometrySurfaceOverride.hpp"
#include "UAkAcousticTextureSetComponent.hpp"
#include "UAkGeometryComponent.hpp"
#include "UFunction.hpp"
UAkGeometryComponent* UAkGeometryComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkGeometryComponent");
    return (UAkGeometryComponent*)res;
}
void UAkGeometryComponent::UpdateGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry"));
    struct Params_UpdateGeometry {
    }; // Size: 0x0
    Params_UpdateGeometry params{};
    ProcessEvent(func, &params);
}
void UAkGeometryComponent::SendGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGeometryComponent.SendGeometry"));
    struct Params_SendGeometry {
    }; // Size: 0x0
    Params_SendGeometry params{};
    ProcessEvent(func, &params);
}
void UAkGeometryComponent::RemoveGeometry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry"));
    struct Params_RemoveGeometry {
    }; // Size: 0x0
    Params_RemoveGeometry params{};
    ProcessEvent(func, &params);
}
void UAkGeometryComponent::ConvertMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGeometryComponent.ConvertMesh"));
    struct Params_ConvertMesh {
    }; // Size: 0x0
    Params_ConvertMesh params{};
    ProcessEvent(func, &params);
}

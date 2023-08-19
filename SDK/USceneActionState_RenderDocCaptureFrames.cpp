#include "USceneActionState_ConsoleRenderingVar.hpp"
#include "USceneActionState_RenderDocCaptureFrames.hpp"
USceneActionState_RenderDocCaptureFrames* USceneActionState_RenderDocCaptureFrames::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_RenderDocCaptureFrames");
    return (USceneActionState_RenderDocCaptureFrames*)res;
}

#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_RenderDocCaptureFrames.hpp"
USceneAction_RenderDocCaptureFrames* USceneAction_RenderDocCaptureFrames::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_RenderDocCaptureFrames");
    return (USceneAction_RenderDocCaptureFrames*)res;
}

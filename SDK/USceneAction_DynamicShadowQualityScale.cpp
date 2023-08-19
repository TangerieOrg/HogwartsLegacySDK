#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_DynamicShadowQualityScale.hpp"
USceneAction_DynamicShadowQualityScale* USceneAction_DynamicShadowQualityScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DynamicShadowQualityScale");
    return (USceneAction_DynamicShadowQualityScale*)res;
}

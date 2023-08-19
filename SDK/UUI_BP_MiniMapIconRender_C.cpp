#include "UMapIconMeshRenderWidget.hpp"
#include "UUI_BP_MiniMapIconRender_C.hpp"
UUI_BP_MiniMapIconRender_C* UUI_BP_MiniMapIconRender_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/MiniMap/InstancedIcons/UI_BP_MiniMapIconRender.UI_BP_MiniMapIconRender_C");
    return (UUI_BP_MiniMapIconRender_C*)res;
}

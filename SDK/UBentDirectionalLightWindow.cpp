#include "UBentDirectionalLightWindow.hpp"
#include "USceneComponent.hpp"
UBentDirectionalLightWindow* UBentDirectionalLightWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BentDirectionalLightWindow");
    return (UBentDirectionalLightWindow*)res;
}

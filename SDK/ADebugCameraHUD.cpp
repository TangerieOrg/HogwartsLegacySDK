#include "ADebugCameraHUD.hpp"
#include "AHUD.hpp"
ADebugCameraHUD* ADebugCameraHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DebugCameraHUD");
    return (ADebugCameraHUD*)res;
}
